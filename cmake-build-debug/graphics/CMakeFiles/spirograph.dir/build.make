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
include graphics/CMakeFiles/spirograph.dir/depend.make
# Include the progress variables for this target.
include graphics/CMakeFiles/spirograph.dir/progress.make

# Include the compile flags for this target's objects.
include graphics/CMakeFiles/spirograph.dir/flags.make

graphics/CMakeFiles/spirograph.dir/spirograph.cpp.o: graphics/CMakeFiles/spirograph.dir/flags.make
graphics/CMakeFiles/spirograph.dir/spirograph.cpp.o: ../graphics/spirograph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object graphics/CMakeFiles/spirograph.dir/spirograph.cpp.o"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spirograph.dir/spirograph.cpp.o -c /Users/jaredanthofer/CLionProjects/C-Plus-Plus/graphics/spirograph.cpp

graphics/CMakeFiles/spirograph.dir/spirograph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spirograph.dir/spirograph.cpp.i"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jaredanthofer/CLionProjects/C-Plus-Plus/graphics/spirograph.cpp > CMakeFiles/spirograph.dir/spirograph.cpp.i

graphics/CMakeFiles/spirograph.dir/spirograph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spirograph.dir/spirograph.cpp.s"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jaredanthofer/CLionProjects/C-Plus-Plus/graphics/spirograph.cpp -o CMakeFiles/spirograph.dir/spirograph.cpp.s

graphics/CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.o: graphics/CMakeFiles/spirograph.dir/flags.make
graphics/CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.o: ../dynamic_programming/binary_tree_sumofleaves.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object graphics/CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.o"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.o -c /Users/jaredanthofer/CLionProjects/C-Plus-Plus/dynamic_programming/binary_tree_sumofleaves.cpp

graphics/CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.i"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jaredanthofer/CLionProjects/C-Plus-Plus/dynamic_programming/binary_tree_sumofleaves.cpp > CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.i

graphics/CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.s"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jaredanthofer/CLionProjects/C-Plus-Plus/dynamic_programming/binary_tree_sumofleaves.cpp -o CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.s

# Object files for target spirograph
spirograph_OBJECTS = \
"CMakeFiles/spirograph.dir/spirograph.cpp.o" \
"CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.o"

# External object files for target spirograph
spirograph_EXTERNAL_OBJECTS =

graphics/spirograph: graphics/CMakeFiles/spirograph.dir/spirograph.cpp.o
graphics/spirograph: graphics/CMakeFiles/spirograph.dir/__/dynamic_programming/binary_tree_sumofleaves.cpp.o
graphics/spirograph: graphics/CMakeFiles/spirograph.dir/build.make
graphics/spirograph: /Library/Developer/CommandLineTools/SDKs/MacOSX12.1.sdk/System/Library/Frameworks/OpenGL.framework/OpenGL.tbd
graphics/spirograph: graphics/CMakeFiles/spirograph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable spirograph"
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spirograph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
graphics/CMakeFiles/spirograph.dir/build: graphics/spirograph
.PHONY : graphics/CMakeFiles/spirograph.dir/build

graphics/CMakeFiles/spirograph.dir/clean:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics && $(CMAKE_COMMAND) -P CMakeFiles/spirograph.dir/cmake_clean.cmake
.PHONY : graphics/CMakeFiles/spirograph.dir/clean

graphics/CMakeFiles/spirograph.dir/depend:
	cd /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jaredanthofer/CLionProjects/C-Plus-Plus /Users/jaredanthofer/CLionProjects/C-Plus-Plus/graphics /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics /Users/jaredanthofer/CLionProjects/C-Plus-Plus/cmake-build-debug/graphics/CMakeFiles/spirograph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graphics/CMakeFiles/spirograph.dir/depend

