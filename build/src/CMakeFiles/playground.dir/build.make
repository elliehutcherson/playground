# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ellie/Projects/playground

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ellie/Projects/playground/build

# Include any dependencies generated for this target.
include src/CMakeFiles/playground.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/playground.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/playground.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/playground.dir/flags.make

src/CMakeFiles/playground.dir/main.cpp.o: src/CMakeFiles/playground.dir/flags.make
src/CMakeFiles/playground.dir/main.cpp.o: /Users/ellie/Projects/playground/src/main.cpp
src/CMakeFiles/playground.dir/main.cpp.o: src/CMakeFiles/playground.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ellie/Projects/playground/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/playground.dir/main.cpp.o"
	cd /Users/ellie/Projects/playground/build/src && /usr/local/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/playground.dir/main.cpp.o -MF CMakeFiles/playground.dir/main.cpp.o.d -o CMakeFiles/playground.dir/main.cpp.o -c /Users/ellie/Projects/playground/src/main.cpp

src/CMakeFiles/playground.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/playground.dir/main.cpp.i"
	cd /Users/ellie/Projects/playground/build/src && /usr/local/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ellie/Projects/playground/src/main.cpp > CMakeFiles/playground.dir/main.cpp.i

src/CMakeFiles/playground.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/playground.dir/main.cpp.s"
	cd /Users/ellie/Projects/playground/build/src && /usr/local/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ellie/Projects/playground/src/main.cpp -o CMakeFiles/playground.dir/main.cpp.s

# Object files for target playground
playground_OBJECTS = \
"CMakeFiles/playground.dir/main.cpp.o"

# External object files for target playground
playground_EXTERNAL_OBJECTS =

src/playground: src/CMakeFiles/playground.dir/main.cpp.o
src/playground: src/CMakeFiles/playground.dir/build.make
src/playground: src/dice/libdice.a
src/playground: src/CMakeFiles/playground.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ellie/Projects/playground/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable playground"
	cd /Users/ellie/Projects/playground/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/playground.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/playground.dir/build: src/playground
.PHONY : src/CMakeFiles/playground.dir/build

src/CMakeFiles/playground.dir/clean:
	cd /Users/ellie/Projects/playground/build/src && $(CMAKE_COMMAND) -P CMakeFiles/playground.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/playground.dir/clean

src/CMakeFiles/playground.dir/depend:
	cd /Users/ellie/Projects/playground/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ellie/Projects/playground /Users/ellie/Projects/playground/src /Users/ellie/Projects/playground/build /Users/ellie/Projects/playground/build/src /Users/ellie/Projects/playground/build/src/CMakeFiles/playground.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/playground.dir/depend
