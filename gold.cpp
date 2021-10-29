#include "G4RunManagerFactory.hh"
#include "G4UImanager.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

#include "GoldActionInitialization.hh"	//Class that generates the actions by the particle gun
#include "GoldDetectorConstruction.hh" //Class that generates the objects
#include "GoldPhysicsList.hh"			//Class that defines the physical processes

int main(int argc,char** argv)
{
  // construct the default run manager
  auto runManager = G4RunManagerFactory::CreateRunManager();

  // set mandatory initialization classes
  runManager->SetUserInitialization(new GoldDetectorConstuction());
  runManager->SetUserInitialization(new GoldPhysicsList());
  runManager->SetUserInitialization(new GoldActionInitialization());

  // initialize G4 kernel
  runManager->Initialize();

  //Allows for the use of the visualizer
  //Initializing visualizer
  //the G4VisExecutive can take verbose options e.g "new G4VisExecutive("Quite")"
  G4VisManager* visManager = new G4VisExecutive;
  visManager->Initialize();

  //get the pointer to the UI manager
  G4UImanager* UI = G4UImanager::GetUIpointer();

  //UIExecutive is the interactive visualizer (i think)
  G4UIExecutive* session = new G4UIExecutive(argc,argv);

  //This allows for the use of my init_vis.mac file to initiate the scene
  G4String command = "/control/execute ";
  G4String macro = argv[1];
  UI->ApplyCommand(command+macro);

  session->SessionStart();
  delete session;

  // job termination
  delete runManager;
  delete visManager;
  return 0;
}
