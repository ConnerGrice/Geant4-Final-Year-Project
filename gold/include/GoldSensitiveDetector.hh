#ifndef INCLUDE_GOLDSENSITIVEDETECTOR_HH_
#define INCLUDE_GOLDSENSITIVEDETECTOR_HH_

#include "G4VSensitiveDetector.hh"

//class G4TouchableHistory;
//class G4Step;

class GoldSensitiveDetector : public G4VSensitiveDetector{
public:
	GoldSensitiveDetector(G4String);
	~GoldSensitiveDetector();

private:
	virtual G4bool ProcessHits(G4Step*,G4TouchableHistory*);
};


#endif /* INCLUDE_GOLDSENSITIVEDETECTOR_HH_ */
