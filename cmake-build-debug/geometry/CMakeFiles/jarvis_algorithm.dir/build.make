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
CMAKE_SOURCE_DIR = /Users/jaredanthofer/CLionProjects/C-Plus-Plus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug

# Include any dependencies generated for this target.
include geometry/CMakeFiles/jarvis_algorithm.dir/depend.make
# Include the progress variables for this target.
include geometry/CMakeFiles/jarvis_algorithm.dir/progress.make

# Include the compile flags for this target's objects.
include geometry/CMakeFiles/jarvis_algorithm.dir/flags.make

geometry/CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.o: geometry/CMakeFiles/jarvis_algorithm.dir/flags.make
geometry/CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.o: ../geometry/jarvis_algorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object geometry/CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.o"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.o -c /Users/jaredanthofer/CLionProjects/C-Plus-Plus/geometry/jarvis_algorithm.cpp

geometry/CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.i"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jaredanthofer/CLionProjects/C-Plus-Plus/geometry/jarvis_algorithm.cpp > CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.i

geometry/CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.s"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jaredanthofer/CLionProjects/C-Plus-Plus/geometry/jarvis_algorithm.cpp -o CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.s

# Object files for target jarvis_algorithm
jarvis_algorithm_OBJECTS = \
"CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.o"

# External object files for target jarvis_algorithm
jarvis_algorithm_EXTERNAL_OBJECTS =

geometry/jarvis_algorithm: geometry/CMakeFiles/jarvis_algorithm.dir/jarvis_algorithm.cpp.o
geometry/jarvis_algorithm: geometry/CMakeFiles/jarvis_algorithm.dir/build.make
geometry/jarvis_algorithm: geometry/CMakeFiles/jarvis_algorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable jarvis_algorithm"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jarvis_algorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
geometry/CMakeFiles/jarvis_algorithm.dir/build: geometry/jarvis_algorithm
.PHONY : geometry/CMakeFiles/jarvis_algorithm.dir/build

geometry/CMakeFiles/jarvis_algorithm.dir/clean:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry && $(CMAKE_COMMAND) -P CMakeFiles/jarvis_algorithm.dir/cmake_clean.cmake
.PHONY : geometry/CMakeFiles/jarvis_algorithm.dir/clean

geometry/CMakeFiles/jarvis_algorithm.dir/depend:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jaredanthofer/CLionProjects/C-Plus-Plus /Users/jaredanthofer/CLionProjects/C-Plus-Plus/geometry /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/geometry/CMakeFiles/jarvis_algorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : geometry/CMakeFiles/jarvis_algorithm.dir/depend

