# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment04.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Assignment04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment04.dir/flags.make

CMakeFiles/Assignment04.dir/main.cpp.o: CMakeFiles/Assignment04.dir/flags.make
CMakeFiles/Assignment04.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment04.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment04.dir/main.cpp.o -c "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/main.cpp"

CMakeFiles/Assignment04.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment04.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/main.cpp" > CMakeFiles/Assignment04.dir/main.cpp.i

CMakeFiles/Assignment04.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment04.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/main.cpp" -o CMakeFiles/Assignment04.dir/main.cpp.s

CMakeFiles/Assignment04.dir/Time.cpp.o: CMakeFiles/Assignment04.dir/flags.make
CMakeFiles/Assignment04.dir/Time.cpp.o: ../Time.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment04.dir/Time.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment04.dir/Time.cpp.o -c "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/Time.cpp"

CMakeFiles/Assignment04.dir/Time.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment04.dir/Time.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/Time.cpp" > CMakeFiles/Assignment04.dir/Time.cpp.i

CMakeFiles/Assignment04.dir/Time.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment04.dir/Time.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/Time.cpp" -o CMakeFiles/Assignment04.dir/Time.cpp.s

# Object files for target Assignment04
Assignment04_OBJECTS = \
"CMakeFiles/Assignment04.dir/main.cpp.o" \
"CMakeFiles/Assignment04.dir/Time.cpp.o"

# External object files for target Assignment04
Assignment04_EXTERNAL_OBJECTS =

Assignment04: CMakeFiles/Assignment04.dir/main.cpp.o
Assignment04: CMakeFiles/Assignment04.dir/Time.cpp.o
Assignment04: CMakeFiles/Assignment04.dir/build.make
Assignment04: CMakeFiles/Assignment04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment04.dir/build: Assignment04
.PHONY : CMakeFiles/Assignment04.dir/build

CMakeFiles/Assignment04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment04.dir/clean

CMakeFiles/Assignment04.dir/depend:
	cd "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04" "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04" "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug" "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug" "/Users/evgenymeshcheryakov/Documents/Metropolia/2nd year/OOPinIoT/Assignment04/cmake-build-debug/CMakeFiles/Assignment04.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment04.dir/depend

