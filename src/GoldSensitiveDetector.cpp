#include "GoldSensitiveDetector.hh"

GoldSensitiveDetector::GoldSensitiveDetector(G4String name) : G4VSensitiveDetector(name){

}

GoldSensitiveDetector::~GoldSensitiveDetector(){

}

G4bool GoldSensitiveDetector::ProcessHits(G4Step* aStep, G4TouchableHistory* ROhist){

	G4Track* track = aStep->GetTrack();

	//This will delete the particle as soon as it enters the detector
	track->SetTrackStatus(fStopAndKill);

	//Gets coordinate of particle entering detector
	G4StepPoint* preStepPoint = aStep->GetPreStepPoint();
	G4ThreeVector pos = preStepPoint->GetPosition();

	//Gets point of particle as it leaves the detector
	G4StepPoint* postStepPoint = aStep->GetPostStepPoint();

	G4cout << "Position: "<<pos<< G4endl;

	//links our pre step point to the physical volume of detector
	const G4VTouchable* touchable = aStep->GetPreStepPoint()->GetTouchable();
	//Gets index of detector that is touched
	G4int copyNo = touchable->GetCopyNumber();

	//Gets the coordinates of the detector that is hit
	G4VPhysicalVolume* physVol = touchable->GetVolume();
	G4ThreeVector posDetector  = physVol->GetTranslation();

	G4cout<< "Position of detector: "<< posDetector << G4endl;
	G4cout<<"Detector Index: "<< copyNo<<G4endl;

	return true;
}

