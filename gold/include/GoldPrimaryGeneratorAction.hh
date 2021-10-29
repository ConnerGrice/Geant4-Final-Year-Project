#ifndef INCLUDE_GOLDPRIMARYGENERATORACTION_HH_
#define INCLUDE_GOLDPRIMARYGENERATORACTION_HH_

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"
#include "G4SystemOfUnits.hh"
#include "G4ThreeVector.hh"
#include "G4ParticleMomentum.hh"

class G4ParticleGun;

class GoldPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction{
	public:
		GoldPrimaryGeneratorAction(
				const G4String& particleName = "alpha",
				G4double energy = 10*MeV,
				G4ThreeVector position = G4ThreeVector(-5*cm,0,0),
				G4ParticleMomentum momentumDir = G4ParticleMomentum(1,0,0));
		virtual ~GoldPrimaryGeneratorAction();

		virtual void GeneratePrimaries(G4Event*);

	private:
		G4ParticleGun* fParticleGun;
};

#endif /* INCLUDE_GOLDPRIMARYGENERATORACTION_HH_ */
