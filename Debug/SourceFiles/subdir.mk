################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../SourceFiles/genArray.cpp \
../SourceFiles/heapSort.cpp \
../SourceFiles/main.cpp \
../SourceFiles/permuteArr.cpp \
../SourceFiles/testProg.cpp 

CC_SRCS += \
../SourceFiles/PrintArray.cc \
../SourceFiles/bubbleSort.cc 

OBJS += \
./SourceFiles/PrintArray.o \
./SourceFiles/bubbleSort.o \
./SourceFiles/genArray.o \
./SourceFiles/heapSort.o \
./SourceFiles/main.o \
./SourceFiles/permuteArr.o \
./SourceFiles/testProg.o 

CC_DEPS += \
./SourceFiles/PrintArray.d \
./SourceFiles/bubbleSort.d 

CPP_DEPS += \
./SourceFiles/genArray.d \
./SourceFiles/heapSort.d \
./SourceFiles/main.d \
./SourceFiles/permuteArr.d \
./SourceFiles/testProg.d 


# Each subdirectory must supply rules for building sources it contributes
SourceFiles/%.o: ../SourceFiles/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SourceFiles/%.o: ../SourceFiles/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


