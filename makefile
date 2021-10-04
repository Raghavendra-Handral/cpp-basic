PROJ_NAME = encapsulation

BUILD_DIR = Build
LIB_DIR = lib

# All Source code files
SRC = src/student.cpp\
#encapsulation.cpp\

# All header file paths
INC = -I inc

# Find out the OS and configure the variables accordingly
ifdef OS	# All configurations for Windwos OS
# Correct the path based on OS
   FixPath = $(subst /,\,$1)
# Name of the compiler used
   CC = g++.exe
else #All configurations for Linux OS
   ifeq ($(shell uname), Linux)
# Correct the path based on OS
      FixPath = $1				
# Name of the compiler used
	  CC = avr-g++
   endif
endif

# Command to make to consider these names as targets and not as file names in folder
.PHONY:all analysis clean doc

# String substitution for every C/C++ file.
# As an example, ./src/hello.cpp turns into ./lib/hello.cpp.o
obj : $(SRC:%=$(LIB_DIR)/%.o)

$(LIB_DIR)/%.cpp.o: %.cpp
# Create directory to store the built files
#	mkdir $(LIB_DIR)
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -c $(SRC) $(INC) -o $(call FixPath,$(LIB_DIR)/)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).exe)

all:$(BUILD_DIR)
# Compile the code and generate the exe file
	$(CC) -g -Wall -Os  $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).exe)

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
# Build the code code documentation using Doxygen command line utility
	make -C documentation

#clean:
# Remove all the build files and generated document files
#	rm -rf $(call FixPath,$(BUILD_DIR)/*)
#	make -C documentation clean