# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\github\tic_tac_toe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\github\tic_tac_toe\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_1.dir/flags.make

CMakeFiles/1_1.dir/main.cpp.obj: CMakeFiles/1_1.dir/flags.make
CMakeFiles/1_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\github\tic_tac_toe\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1_1.dir\main.cpp.obj -c C:\github\tic_tac_toe\main.cpp

CMakeFiles/1_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\github\tic_tac_toe\main.cpp > CMakeFiles\1_1.dir\main.cpp.i

CMakeFiles/1_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\github\tic_tac_toe\main.cpp -o CMakeFiles\1_1.dir\main.cpp.s

CMakeFiles/1_1.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/1_1.dir/main.cpp.obj.requires

CMakeFiles/1_1.dir/main.cpp.obj.provides: CMakeFiles/1_1.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\1_1.dir\build.make CMakeFiles/1_1.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/1_1.dir/main.cpp.obj.provides

CMakeFiles/1_1.dir/main.cpp.obj.provides.build: CMakeFiles/1_1.dir/main.cpp.obj


# Object files for target 1_1
1_1_OBJECTS = \
"CMakeFiles/1_1.dir/main.cpp.obj"

# External object files for target 1_1
1_1_EXTERNAL_OBJECTS =

1_1.exe: CMakeFiles/1_1.dir/main.cpp.obj
1_1.exe: CMakeFiles/1_1.dir/build.make
1_1.exe: CMakeFiles/1_1.dir/linklibs.rsp
1_1.exe: CMakeFiles/1_1.dir/objects1.rsp
1_1.exe: CMakeFiles/1_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\github\tic_tac_toe\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_1.dir/build: 1_1.exe

.PHONY : CMakeFiles/1_1.dir/build

CMakeFiles/1_1.dir/requires: CMakeFiles/1_1.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/1_1.dir/requires

CMakeFiles/1_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1_1.dir/clean

CMakeFiles/1_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\github\tic_tac_toe C:\github\tic_tac_toe C:\github\tic_tac_toe\cmake-build-debug C:\github\tic_tac_toe\cmake-build-debug C:\github\tic_tac_toe\cmake-build-debug\CMakeFiles\1_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_1.dir/depend

