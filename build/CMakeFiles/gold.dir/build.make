# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/local1/eclipse-workspace/gold

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/local1/eclipse-workspace/gold/build

# Include any dependencies generated for this target.
include CMakeFiles/gold.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gold.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gold.dir/flags.make

CMakeFiles/gold.dir/gold.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/gold.cpp.o: ../gold.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gold.dir/gold.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/gold.cpp.o -c /home/local1/eclipse-workspace/gold/gold.cpp

CMakeFiles/gold.dir/gold.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/gold.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/gold.cpp > CMakeFiles/gold.dir/gold.cpp.i

CMakeFiles/gold.dir/gold.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/gold.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/gold.cpp -o CMakeFiles/gold.dir/gold.cpp.s

CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.o: ../src/GoldActionInitialization.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.o -c /home/local1/eclipse-workspace/gold/src/GoldActionInitialization.cpp

CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/src/GoldActionInitialization.cpp > CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.i

CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/src/GoldActionInitialization.cpp -o CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.s

CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.o: ../src/GoldDetectorConstruction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.o -c /home/local1/eclipse-workspace/gold/src/GoldDetectorConstruction.cpp

CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/src/GoldDetectorConstruction.cpp > CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.i

CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/src/GoldDetectorConstruction.cpp -o CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.s

CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.o: ../src/GoldPhysicsList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.o -c /home/local1/eclipse-workspace/gold/src/GoldPhysicsList.cpp

CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/src/GoldPhysicsList.cpp > CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.i

CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/src/GoldPhysicsList.cpp -o CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.s

CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.o: ../src/GoldPrimaryGeneratorAction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.o -c /home/local1/eclipse-workspace/gold/src/GoldPrimaryGeneratorAction.cpp

CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/src/GoldPrimaryGeneratorAction.cpp > CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.i

CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/src/GoldPrimaryGeneratorAction.cpp -o CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.s

CMakeFiles/gold.dir/src/GoldRunAction.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/src/GoldRunAction.cpp.o: ../src/GoldRunAction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/gold.dir/src/GoldRunAction.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/src/GoldRunAction.cpp.o -c /home/local1/eclipse-workspace/gold/src/GoldRunAction.cpp

CMakeFiles/gold.dir/src/GoldRunAction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/src/GoldRunAction.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/src/GoldRunAction.cpp > CMakeFiles/gold.dir/src/GoldRunAction.cpp.i

CMakeFiles/gold.dir/src/GoldRunAction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/src/GoldRunAction.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/src/GoldRunAction.cpp -o CMakeFiles/gold.dir/src/GoldRunAction.cpp.s

CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.o: CMakeFiles/gold.dir/flags.make
CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.o: ../src/GoldSensitiveDetector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.o -c /home/local1/eclipse-workspace/gold/src/GoldSensitiveDetector.cpp

CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local1/eclipse-workspace/gold/src/GoldSensitiveDetector.cpp > CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.i

CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local1/eclipse-workspace/gold/src/GoldSensitiveDetector.cpp -o CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.s

# Object files for target gold
gold_OBJECTS = \
"CMakeFiles/gold.dir/gold.cpp.o" \
"CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.o" \
"CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.o" \
"CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.o" \
"CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.o" \
"CMakeFiles/gold.dir/src/GoldRunAction.cpp.o" \
"CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.o"

# External object files for target gold
gold_EXTERNAL_OBJECTS =

gold: CMakeFiles/gold.dir/gold.cpp.o
gold: CMakeFiles/gold.dir/src/GoldActionInitialization.cpp.o
gold: CMakeFiles/gold.dir/src/GoldDetectorConstruction.cpp.o
gold: CMakeFiles/gold.dir/src/GoldPhysicsList.cpp.o
gold: CMakeFiles/gold.dir/src/GoldPrimaryGeneratorAction.cpp.o
gold: CMakeFiles/gold.dir/src/GoldRunAction.cpp.o
gold: CMakeFiles/gold.dir/src/GoldSensitiveDetector.cpp.o
gold: CMakeFiles/gold.dir/build.make
gold: /usr/local/geant4.10.07.p02/lib64/libG4Tree.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4FR.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4GMocren.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4visHepRep.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4RayTracer.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4VRML.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4OpenGL.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4gl2ps.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4vis_management.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4modeling.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4interfaces.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4persistency.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4error_propagation.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4readout.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4physicslists.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4tasking.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4parmodels.so
gold: /usr/lib64/libXm.so
gold: /usr/lib64/libXmu.so
gold: /usr/lib64/libXext.so
gold: /usr/lib64/libXt.so
gold: /usr/lib64/libICE.so
gold: /usr/lib64/libSM.so
gold: /usr/lib64/libX11.so
gold: /usr/lib64/libGL.so
gold: /usr/lib64/libQt5OpenGL.so.5.12.5
gold: /usr/lib64/libQt5PrintSupport.so.5.12.5
gold: /usr/lib64/libQt5Widgets.so.5.12.5
gold: /usr/lib64/libQt5Gui.so.5.12.5
gold: /usr/lib64/libQt5Core.so.5.12.5
gold: /usr/local/XercesC/3.2.3/lib/libxerces-c.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4run.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4event.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4tracking.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4processes.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4analysis.so
gold: /usr/lib64/libexpat.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4digits_hits.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4track.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4particles.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4geometry.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4materials.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4zlib.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4graphics_reps.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4intercoms.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4global.so
gold: /usr/local/geant4.10.07.p02/lib64/libG4ptl.so.0.0.2
gold: /usr/local/clhep/2.4.4.0/lib/libCLHEP-2.4.4.0.so
gold: CMakeFiles/gold.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/local1/eclipse-workspace/gold/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable gold"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gold.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gold.dir/build: gold

.PHONY : CMakeFiles/gold.dir/build

CMakeFiles/gold.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gold.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gold.dir/clean

CMakeFiles/gold.dir/depend:
	cd /home/local1/eclipse-workspace/gold/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/local1/eclipse-workspace/gold /home/local1/eclipse-workspace/gold /home/local1/eclipse-workspace/gold/build /home/local1/eclipse-workspace/gold/build /home/local1/eclipse-workspace/gold/build/CMakeFiles/gold.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gold.dir/depend

