#include "GoldActionInitialization.hh"
#include "../include/GoldPrimaryGeneratorAction.hh"
#include "GoldRunAction.hh"

GoldActionInitialization::GoldActionInitialization() : G4VUserActionInitialization(){

}

GoldActionInitialization::~GoldActionInitialization(){

}

void GoldActionInitialization::Build() const {
	SetUserAction(new GoldPrimaryGeneratorAction);
	SetUserAction(new GoldRunAction);
}

