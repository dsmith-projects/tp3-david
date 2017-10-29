################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Equipo.cpp \
../src/Persona.cpp \
../src/Requerimiento.cpp \
../src/Tarea.cpp \
../src/main.cpp 

OBJS += \
./src/Equipo.o \
./src/Persona.o \
./src/Requerimiento.o \
./src/Tarea.o \
./src/main.o 

CPP_DEPS += \
./src/Equipo.d \
./src/Persona.d \
./src/Requerimiento.d \
./src/Tarea.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


