################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/genArray.cpp \
../src/heapSort.cpp \
../src/main.cpp \
../src/permuteArr.cpp \
../src/testProg.cpp 

CC_SRCS += \
../src/PrintArray.cc \
../src/bubbleSort.cc 

OBJS += \
./src/PrintArray.o \
./src/bubbleSort.o \
./src/genArray.o \
./src/heapSort.o \
./src/main.o \
./src/permuteArr.o \
./src/testProg.o 

CC_DEPS += \
./src/PrintArray.d \
./src/bubbleSort.d 

CPP_DEPS += \
./src/genArray.d \
./src/heapSort.d \
./src/main.d \
./src/permuteArr.d \
./src/testProg.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


