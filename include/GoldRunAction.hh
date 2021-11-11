#ifndef INCLUDE_GOLDRUNACTION_HH_
#define INCLUDE_GOLDRUNACTION_HH_

#include "G4UserRunAction.hh"

class GoldRunAction : public G4UserRunAction{
public:
	GoldRunAction();
	virtual ~GoldRunAction();

	virtual void BeginOfRunAction(const G4Run*);
	virtual void EndOfRunAction(const G4Run*);
};




#endif /* INCLUDE_GOLDRUNACTION_HH_ */
