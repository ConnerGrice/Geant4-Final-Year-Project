#include "GoldRunAction.hh"

#include "g4root.hh"

GoldRunAction::GoldRunAction() : G4UserRunAction(){

}

GoldRunAction::~GoldRunAction(){

	delete G4AnalysisManager::Instance();
}

void GoldRunAction::BeginOfRunAction(const G4Run*){

	G4AnalysisManager* anaMan = G4AnalysisManager::Instance();
	anaMan->SetVerboseLevel(2);
	anaMan->OpenFile("output.root");
	anaMan->CreateNtuple("Gold","Hits");
	anaMan->CreateNtupleDColumn("Angle");
	anaMan->FinishNtuple(0);
}

void GoldRunAction::EndOfRunAction(const G4Run*){

	G4AnalysisManager* anaMan = G4AnalysisManager::Instance();

	anaMan->Write();
	anaMan->CloseFile();

}
