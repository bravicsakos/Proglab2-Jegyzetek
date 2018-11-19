################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BorderedRectangle.cpp \
../src/Date.cpp \
../src/DateTime.cpp \
../src/Project_5.cpp \
../src/Rectangle.cpp \
../src/Time.cpp 

OBJS += \
./src/BorderedRectangle.o \
./src/Date.o \
./src/DateTime.o \
./src/Project_5.o \
./src/Rectangle.o \
./src/Time.o 

CPP_DEPS += \
./src/BorderedRectangle.d \
./src/Date.d \
./src/DateTime.d \
./src/Project_5.d \
./src/Rectangle.d \
./src/Time.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


