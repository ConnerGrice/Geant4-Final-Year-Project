#ifndef INCLUDE_GOLDPHYSICSLIST_HH_
#define INCLUDE_GOLDPHYSICSLIST_HH_

#include "G4VUserPhysicsList.hh"
#include "G4VPhysicsConstructor.hh"

class GoldPhysicsList : public G4VUserPhysicsList{
public:
	GoldPhysicsList();
	virtual ~GoldPhysicsList();

public:
	virtual void ConstructParticle();
	virtual void ConstructProcess();

};

#endif /* INCLUDE_GOLDPHYSICSLIST_HH_ */
