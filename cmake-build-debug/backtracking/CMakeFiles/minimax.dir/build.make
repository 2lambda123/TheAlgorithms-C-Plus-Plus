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
include backtracking/CMakeFiles/minimax.dir/depend.make
# Include the progress variables for this target.
include backtracking/CMakeFiles/minimax.dir/progress.make

# Include the compile flags for this target's objects.
include backtracking/CMakeFiles/minimax.dir/flags.make

backtracking/CMakeFiles/minimax.dir/minimax.cpp.o: backtracking/CMakeFiles/minimax.dir/flags.make
backtracking/CMakeFiles/minimax.dir/minimax.cpp.o: ../backtracking/minimax.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object backtracking/CMakeFiles/minimax.dir/minimax.cpp.o"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minimax.dir/minimax.cpp.o -c /Users/jaredanthofer/CLionProjects/C-Plus-Plus/backtracking/minimax.cpp

backtracking/CMakeFiles/minimax.dir/minimax.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minimax.dir/minimax.cpp.i"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jaredanthofer/CLionProjects/C-Plus-Plus/backtracking/minimax.cpp > CMakeFiles/minimax.dir/minimax.cpp.i

backtracking/CMakeFiles/minimax.dir/minimax.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minimax.dir/minimax.cpp.s"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jaredanthofer/CLionProjects/C-Plus-Plus/backtracking/minimax.cpp -o CMakeFiles/minimax.dir/minimax.cpp.s

# Object files for target minimax
minimax_OBJECTS = \
"CMakeFiles/minimax.dir/minimax.cpp.o"

# External object files for target minimax
minimax_EXTERNAL_OBJECTS =

backtracking/minimax: backtracking/CMakeFiles/minimax.dir/minimax.cpp.o
backtracking/minimax: backtracking/CMakeFiles/minimax.dir/build.make
backtracking/minimax: backtracking/CMakeFiles/minimax.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable minimax"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minimax.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
backtracking/CMakeFiles/minimax.dir/build: backtracking/minimax
.PHONY : backtracking/CMakeFiles/minimax.dir/build

backtracking/CMakeFiles/minimax.dir/clean:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking && $(CMAKE_COMMAND) -P CMakeFiles/minimax.dir/cmake_clean.cmake
.PHONY : backtracking/CMakeFiles/minimax.dir/clean

backtracking/CMakeFiles/minimax.dir/depend:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jaredanthofer/CLionProjects/C-Plus-Plus /Users/jaredanthofer/CLionProjects/C-Plus-Plus/backtracking /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/backtracking/CMakeFiles/minimax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : backtracking/CMakeFiles/minimax.dir/depend

