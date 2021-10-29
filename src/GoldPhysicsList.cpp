#include "GoldPhysicsList.hh"

#include "G4Alpha.hh"
#include "G4PhysicsListHelper.hh"
#include "G4IonCoulombScatteringModel.hh"
#include "G4VPhysicsConstructor.hh"
#include "G4EmStandardPhysicsSS.hh"

#include "G4LeptonConstructor.hh"
#include "G4MesonConstructor.hh"
#include "G4BaryonConstructor.hh"
#include "G4BosonConstructor.hh"
#include "G4ShortLivedConstructor.hh"
#include "G4IonConstructor.hh"

//Constructor
GoldPhysicsList::GoldPhysicsList() : G4VUserPhysicsList(){

}

//Destructor
GoldPhysicsList::~GoldPhysicsList(){

}

//Defines Particles in simulation
void GoldPhysicsList::ConstructParticle(){
	//G4Alpha::AlphaDefinition();
	// Construct all baryons
	G4BaryonConstructor bConstructor; 	//pointer to constructor
	bConstructor.ConstructParticle();	//method that constructs

	// Construct all leptons
	G4LeptonConstructor lConstructor;
	lConstructor.ConstructParticle();

	// Construct all mesons
	G4MesonConstructor mConstructor;
	mConstructor.ConstructParticle();

	// Construct all Boson
	G4BosonConstructor bsConstructor;
	bsConstructor.ConstructParticle();

	// Construct all Shortlived
	G4ShortLivedConstructor slConstructor;
	slConstructor.ConstructParticle();

	// Construct Ion
	G4IonConstructor iConstructor;
	iConstructor.ConstructParticle();
}

//Defines processes in simulation
void GoldPhysicsList::ConstructProcess(){

	//Allows for tracking
	AddTransportation();

	//Allows for Ion scattering
	G4VPhysicsConstructor* scatter = new G4EmStandardPhysicsSS();
	scatter->ConstructProcess();
}
