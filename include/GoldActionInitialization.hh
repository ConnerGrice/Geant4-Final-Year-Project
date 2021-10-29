#ifndef INCLUDE_GOLDACTIONINITIALIZATION_HH_
#define INCLUDE_GOLDACTIONINITIALIZATION_HH_

#include "G4VUserActionInitialization.hh"

class GoldActionInitialization : public G4VUserActionInitialization{
	public:
	GoldActionInitialization();
	virtual ~GoldActionInitialization();

	virtual void Build() const;
};

#endif /* INCLUDE_GOLDACTIONINITIALIZATION_HH_ */
