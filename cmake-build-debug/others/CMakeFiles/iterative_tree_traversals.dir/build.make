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
include others/CMakeFiles/iterative_tree_traversals.dir/depend.make
# Include the progress variables for this target.
include others/CMakeFiles/iterative_tree_traversals.dir/progress.make

# Include the compile flags for this target's objects.
include others/CMakeFiles/iterative_tree_traversals.dir/flags.make

others/CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.o: others/CMakeFiles/iterative_tree_traversals.dir/flags.make
others/CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.o: ../others/iterative_tree_traversals.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object others/CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.o"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.o -c /Users/jaredanthofer/CLionProjects/C-Plus-Plus/others/iterative_tree_traversals.cpp

others/CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.i"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jaredanthofer/CLionProjects/C-Plus-Plus/others/iterative_tree_traversals.cpp > CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.i

others/CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.s"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jaredanthofer/CLionProjects/C-Plus-Plus/others/iterative_tree_traversals.cpp -o CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.s

# Object files for target iterative_tree_traversals
iterative_tree_traversals_OBJECTS = \
"CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.o"

# External object files for target iterative_tree_traversals
iterative_tree_traversals_EXTERNAL_OBJECTS =

others/iterative_tree_traversals: others/CMakeFiles/iterative_tree_traversals.dir/iterative_tree_traversals.cpp.o
others/iterative_tree_traversals: others/CMakeFiles/iterative_tree_traversals.dir/build.make
others/iterative_tree_traversals: others/CMakeFiles/iterative_tree_traversals.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable iterative_tree_traversals"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iterative_tree_traversals.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
others/CMakeFiles/iterative_tree_traversals.dir/build: others/iterative_tree_traversals
.PHONY : others/CMakeFiles/iterative_tree_traversals.dir/build

others/CMakeFiles/iterative_tree_traversals.dir/clean:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others && $(CMAKE_COMMAND) -P CMakeFiles/iterative_tree_traversals.dir/cmake_clean.cmake
.PHONY : others/CMakeFiles/iterative_tree_traversals.dir/clean

others/CMakeFiles/iterative_tree_traversals.dir/depend:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jaredanthofer/CLionProjects/C-Plus-Plus /Users/jaredanthofer/CLionProjects/C-Plus-Plus/others /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/others/CMakeFiles/iterative_tree_traversals.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : others/CMakeFiles/iterative_tree_traversals.dir/depend

