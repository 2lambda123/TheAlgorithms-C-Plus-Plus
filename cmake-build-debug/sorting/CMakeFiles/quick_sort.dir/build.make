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
include sorting/CMakeFiles/quick_sort.dir/depend.make
# Include the progress variables for this target.
include sorting/CMakeFiles/quick_sort.dir/progress.make

# Include the compile flags for this target's objects.
include sorting/CMakeFiles/quick_sort.dir/flags.make

sorting/CMakeFiles/quick_sort.dir/quick_sort.cpp.o: sorting/CMakeFiles/quick_sort.dir/flags.make
sorting/CMakeFiles/quick_sort.dir/quick_sort.cpp.o: ../sorting/quick_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sorting/CMakeFiles/quick_sort.dir/quick_sort.cpp.o"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quick_sort.dir/quick_sort.cpp.o -c /Users/jaredanthofer/CLionProjects/C-Plus-Plus/sorting/quick_sort.cpp

sorting/CMakeFiles/quick_sort.dir/quick_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quick_sort.dir/quick_sort.cpp.i"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jaredanthofer/CLionProjects/C-Plus-Plus/sorting/quick_sort.cpp > CMakeFiles/quick_sort.dir/quick_sort.cpp.i

sorting/CMakeFiles/quick_sort.dir/quick_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quick_sort.dir/quick_sort.cpp.s"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jaredanthofer/CLionProjects/C-Plus-Plus/sorting/quick_sort.cpp -o CMakeFiles/quick_sort.dir/quick_sort.cpp.s

# Object files for target quick_sort
quick_sort_OBJECTS = \
"CMakeFiles/quick_sort.dir/quick_sort.cpp.o"

# External object files for target quick_sort
quick_sort_EXTERNAL_OBJECTS =

sorting/quick_sort: sorting/CMakeFiles/quick_sort.dir/quick_sort.cpp.o
sorting/quick_sort: sorting/CMakeFiles/quick_sort.dir/build.make
sorting/quick_sort: sorting/CMakeFiles/quick_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quick_sort"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quick_sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sorting/CMakeFiles/quick_sort.dir/build: sorting/quick_sort
.PHONY : sorting/CMakeFiles/quick_sort.dir/build

sorting/CMakeFiles/quick_sort.dir/clean:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting && $(CMAKE_COMMAND) -P CMakeFiles/quick_sort.dir/cmake_clean.cmake
.PHONY : sorting/CMakeFiles/quick_sort.dir/clean

sorting/CMakeFiles/quick_sort.dir/depend:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jaredanthofer/CLionProjects/C-Plus-Plus /Users/jaredanthofer/CLionProjects/C-Plus-Plus/sorting /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/sorting/CMakeFiles/quick_sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sorting/CMakeFiles/quick_sort.dir/depend

