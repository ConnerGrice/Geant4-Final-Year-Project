################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/GoldActionInitialization.cpp \
../src/GoldDetectorConstruction.cpp \
../src/GoldPhysicsList.cpp \
../src/GoldPrimaryGeneratorAction.cpp 

OBJS += \
./src/GoldActionInitialization.o \
./src/GoldDetectorConstruction.o \
./src/GoldPhysicsList.o \
./src/GoldPrimaryGeneratorAction.o 

CPP_DEPS += \
./src/GoldActionInitialization.d \
./src/GoldDetectorConstruction.d \
./src/GoldPhysicsList.d \
./src/GoldPrimaryGeneratorAction.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/usr/local/geant4.10.07.p02/include/Geant4 -I/usr/local/clhep/2.4.4.0/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


