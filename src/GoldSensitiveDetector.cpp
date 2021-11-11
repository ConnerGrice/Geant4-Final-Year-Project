#include "GoldSensitiveDetector.hh"

#include "g4root.hh"
#include "G4RunManager.hh"

GoldSensitiveDetector::GoldSensitiveDetector(G4String name) : G4VSensitiveDetector(name){

}

GoldSensitiveDetector::~GoldSensitiveDetector(){

}

G4bool GoldSensitiveDetector::ProcessHits(G4Step* aStep, G4TouchableHistory*){

	G4Track* track = aStep->GetTrack();

	//This will delete the particle as soon as it enters the detector
	track->SetTrackStatus(fStopAndKill);

	//Gets coordinate of particle entering detector
	G4StepPoint* preStepPoint = aStep->GetPreStepPoint();
	G4ThreeVector pos = preStepPoint->GetPosition();

	//Gets point of particle as it leaves the detector
	G4StepPoint* postStepPoint = aStep->GetPostStepPoint();

	//links our pre step point to the physical volume of detector
	const G4VTouchable* touchable = aStep->GetPreStepPoint()->GetTouchable();
	//Gets index of detector that is touched
	G4int copyNo = touchable->GetCopyNumber();

	//Gets the coordinates of the detector that is hit
	G4VPhysicalVolume* physVol = touchable->GetVolume();
	G4ThreeVector posDetector  = physVol->GetTranslation();

	//G4cout<<"Detector Index: "<< copyNo<<G4endl;

	//Maps copy number onto the angle corresponding to the centre of that segment
	G4double angle = copyNo-0.5;

	//Fills in the data to the root file
	G4AnalysisManager* anaMan = G4AnalysisManager::Instance();

	anaMan->FillNtupleDColumn(0,angle);
	anaMan->AddNtupleRow();

	return true;
}

