# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /Users/ahnsugyeong/Desktop/2022/Problem_Solving

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Problem_Solving.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Problem_Solving.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Problem_Solving.dir/flags.make

CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.o: CMakeFiles/Problem_Solving.dir/flags.make
CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.o: ../baekjoon/2022_02_10/2078.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.o -c /Users/ahnsugyeong/Desktop/2022/Problem_Solving/baekjoon/2022_02_10/2078.cpp

CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ahnsugyeong/Desktop/2022/Problem_Solving/baekjoon/2022_02_10/2078.cpp > CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.i

CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ahnsugyeong/Desktop/2022/Problem_Solving/baekjoon/2022_02_10/2078.cpp -o CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.s

# Object files for target Problem_Solving
Problem_Solving_OBJECTS = \
"CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.o"

# External object files for target Problem_Solving
Problem_Solving_EXTERNAL_OBJECTS =

Problem_Solving: CMakeFiles/Problem_Solving.dir/baekjoon/2022_02_10/2078.cpp.o
Problem_Solving: CMakeFiles/Problem_Solving.dir/build.make
Problem_Solving: CMakeFiles/Problem_Solving.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Problem_Solving"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Problem_Solving.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Problem_Solving.dir/build: Problem_Solving

.PHONY : CMakeFiles/Problem_Solving.dir/build

CMakeFiles/Problem_Solving.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Problem_Solving.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Problem_Solving.dir/clean

CMakeFiles/Problem_Solving.dir/depend:
	cd /Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ahnsugyeong/Desktop/2022/Problem_Solving /Users/ahnsugyeong/Desktop/2022/Problem_Solving /Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug /Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug /Users/ahnsugyeong/Desktop/2022/Problem_Solving/cmake-build-debug/CMakeFiles/Problem_Solving.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Problem_Solving.dir/depend

