#include "GoldActionInitialization.hh"

#include "../include/GoldPrimaryGeneratorAction.hh"

GoldActionInitialization::GoldActionInitialization() : G4VUserActionInitialization(){

}

GoldActionInitialization::~GoldActionInitialization(){

}

void GoldActionInitialization::Build() const {
	SetUserAction(new GoldPrimaryGeneratorAction);
}

