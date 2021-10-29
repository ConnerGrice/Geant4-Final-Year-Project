#include "GoldDetectorConstruction.hh"

#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4NistManager.hh"
#include "G4PVPlacement.hh"
#include "G4PVReplica.hh"
#include "G4LogicalVolume.hh"
#include "G4SystemOfUnits.hh"
#include "G4RotationMatrix.hh"

GoldDetectorConstuction::GoldDetectorConstuction() : G4VUserDetectorConstruction(){

}

GoldDetectorConstuction::~GoldDetectorConstuction(){

}

G4VPhysicalVolume* GoldDetectorConstuction::Construct(){

	//Allows for the use of Nist Material list
	G4NistManager* nist = G4NistManager::Instance();

	//Defines some materials
	G4Material* air = nist->FindOrBuildMaterial("G4_AIR");
	G4Material* gold = nist->FindOrBuildMaterial("G4_Ag");

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
	//Tube dimensions
	G4double inner = 8*cm;		//Inner radius
	G4double outer = 8.1*cm;	//Outer radius
	G4double halfHeight = 10*cm;//Half the height
	G4double startPhi = 0;		//Starting angle
	G4double endPhi = 2*M_PI;	//Ending angle

	//Rotation matrix rotating 90 degrees in the X axis
	G4RotationMatrix* rotationMatrixX = new G4RotationMatrix();
	rotationMatrixX->rotateX(90*deg);

	//Whole tube object
	G4Tubs* solidDet = new G4Tubs("Detector",inner,outer,halfHeight,startPhi,endPhi);
	G4LogicalVolume* logicDet = new G4LogicalVolume(solidDet,air,"Detector");
	new G4PVPlacement(
					rotationMatrixX,
					G4ThreeVector(0,0,0),
					"Detector",
					logicDet,
					physicalWorld,
					false,
					0);

	//Subdivided tube
	G4double phiSegment = endPhi/360;	//each wedge segment angle

	G4VSolid* dividedDet = new G4Tubs("DivivedDetector",inner,outer,halfHeight,-phiSegment/2*rad,phiSegment*rad);
	G4LogicalVolume* logicDividedDet = new G4LogicalVolume(dividedDet,air,"DividedDetector");
	new G4PVReplica(
				"DividedDetector",	//Object name
				logicDividedDet,	//Logical object
				logicDet,			//Whole logical object
				kPhi,				//axis of divisions
				360,				//number of replicas
				phiSegment);		//dimension of each segment

	return physicalWorld;

}


