#include "GoldDetectorConstruction.hh"
#include "GoldSensitiveDetector.hh"

#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4NistManager.hh"
#include "G4Transform3D.hh"
#include "G4PVPlacement.hh"
#include "G4PVReplica.hh"
#include "G4PVDivision.hh"
#include "G4LogicalVolume.hh"
#include "G4SystemOfUnits.hh"
#include "G4RotationMatrix.hh"
#include "G4SDManager.hh"

GoldDetectorConstuction::GoldDetectorConstuction() : G4VUserDetectorConstruction(),
logicDet(0){

}

GoldDetectorConstuction::~GoldDetectorConstuction(){

}

G4VPhysicalVolume* GoldDetectorConstuction::Construct(){

	//Allows for the use of Nist Material list
	G4NistManager* nist = G4NistManager::Instance();

	//Defines some materials
	G4Material* air = nist->FindOrBuildMaterial("G4_AIR");
	G4Material* gold = nist->FindOrBuildMaterial("G4_Ag");
	G4Material* lead = nist->FindOrBuildMaterial("G4_Pb");

	G4bool checkOverlaps = true;

//World=======================================================================================
	//World Dimensions
	G4double worldX = 50*cm;
	G4double worldY = 50*cm;
	G4double worldZ = 25*cm;

	//Generates world object that everything else will be inside of
	G4Box* solidWorld 					= new G4Box("World",worldX,worldY,worldZ);
	G4LogicalVolume* logicWorld 		= new G4LogicalVolume(solidWorld,air,"World");
	G4VPhysicalVolume* physicalWorld 	= new G4PVPlacement(
													0,						//Rotation
													G4ThreeVector(0,0,0),	//Translation
													logicWorld,				//Logical volume
													"World",				//Volume name
													0,						//Mother volume (none)
													false,					//Boolean operations
													0,						//Copy number
													checkOverlaps);			//Checks overlaps
//Foil==========================================================================================
	//Foil Dimensions
	G4double foilX = 1.5*cm;
	G4double foilY = 1.5*cm;
	G4double foilZ = 40*nm;

	//Rotation matrix rotating 90 degrees in the Y axis
	G4RotationMatrix* rotationMatrixY = new G4RotationMatrix();
	rotationMatrixY->rotateY(90*deg);

	//Generates foil volume inside of world volume
	G4Box* solidFoil 			= new G4Box("Foil",foilX,foilY,foilZ);
	G4LogicalVolume* logicFoil	= new G4LogicalVolume(solidFoil,gold,"Foil");
	new G4PVPlacement(
					rotationMatrixY,
					G4ThreeVector(0,0,0),
					logicFoil,
					"Foil",
					logicWorld,
					false,
					0);
//Detector=======================================================================================

	G4double numOfSegments = 360;


	//Tube dimensions
	G4double inner = 5.5*cm;		//Inner radius
	G4double outer = 5.6*cm;	//Outer radius
	G4double halfHeight = 1.5*cm;//Half the height
	G4double startPhi = 0;		//Starting angle
	G4double endPhi = (2*M_PI)/numOfSegments;	//Ending angle

	G4ThreeVector x = G4ThreeVector(1,0,0);
	G4ThreeVector z = G4ThreeVector(0,0,1);

	//Whole tube object
	G4Tubs* solidDet = new G4Tubs("Detector",inner,outer,halfHeight,startPhi,endPhi);
	logicDet = new G4LogicalVolume(solidDet,lead,"Detector");

	for(G4int i=0;i<numOfSegments;i++){
		G4Transform3D rotation = G4Rotate3D(90*deg,x)*G4Rotate3D(i*(endPhi)*rad,z);
		new G4PVPlacement(
						rotation,
						"Detector",
						logicDet,
						physicalWorld,
						false,
						i+1,
						checkOverlaps);
	}

	return physicalWorld;
}


void GoldDetectorConstuction::ConstructSDandField(){
	GoldSensitiveDetector* sensDet = new GoldSensitiveDetector("SensitiveDetector");
	logicDet->SetSensitiveDetector(sensDet);
}


