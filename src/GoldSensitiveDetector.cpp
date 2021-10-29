#include "GoldSensitiveDetector.hh"

GoldSensitiveDetector::GoldSensitiveDetector(G4String name) : G4VSensitiveDetector(name){

}

GoldSensitiveDetector::~GoldSensitiveDetector(){

}

G4bool GoldSensitiveDetector::ProcessHits(G4Step* aStep, G4TouchableHistory* ROhist){

	G4StepPoint* preStepPoint = aStep->GetPreStepPoint();

	G4ThreeVector pos = preStepPoint->GetPosition();

	G4cout << "Position: "<<pos<< G4endl;
	return true;
}

