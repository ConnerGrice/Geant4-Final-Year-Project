#ifndef INCLUDE_GOLDDETECTORCONSTRUCTION_HH_
#define INCLUDE_GOLDDETECTORCONSTRUCTION_HH_

#include "G4VUserDetectorConstruction.hh"

class G4VPhysicalVolume;
class G4LogicalVolume;

class GoldDetectorConstuction : public G4VUserDetectorConstruction{
	public:
		GoldDetectorConstuction();
		virtual ~GoldDetectorConstuction();
		virtual G4VPhysicalVolume* Construct();
	private:
		G4LogicalVolume* logicDet;
		virtual void ConstructSDandField();
};

#endif /* INCLUDE_GOLDDETECTORCONSTRUCTION_HH_ */
