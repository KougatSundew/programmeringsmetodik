# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/labb_5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/labb_5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/labb_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/labb_5.dir/flags.make

CMakeFiles/labb_5.dir/main.cpp.obj: CMakeFiles/labb_5.dir/flags.make
CMakeFiles/labb_5.dir/main.cpp.obj: ../main.cpp
CMakeFiles/labb_5.dir/main.cpp.obj: CMakeFiles/labb_5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/labb_5.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/labb_5.dir/main.cpp.obj -MF CMakeFiles\labb_5.dir\main.cpp.obj.d -o CMakeFiles\labb_5.dir\main.cpp.obj -c "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\main.cpp"

CMakeFiles/labb_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labb_5.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\main.cpp" > CMakeFiles\labb_5.dir\main.cpp.i

CMakeFiles/labb_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labb_5.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\main.cpp" -o CMakeFiles\labb_5.dir\main.cpp.s

CMakeFiles/labb_5.dir/CPU.cpp.obj: CMakeFiles/labb_5.dir/flags.make
CMakeFiles/labb_5.dir/CPU.cpp.obj: ../CPU.cpp
CMakeFiles/labb_5.dir/CPU.cpp.obj: CMakeFiles/labb_5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/labb_5.dir/CPU.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/labb_5.dir/CPU.cpp.obj -MF CMakeFiles\labb_5.dir\CPU.cpp.obj.d -o CMakeFiles\labb_5.dir\CPU.cpp.obj -c "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\CPU.cpp"

CMakeFiles/labb_5.dir/CPU.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labb_5.dir/CPU.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\CPU.cpp" > CMakeFiles\labb_5.dir\CPU.cpp.i

CMakeFiles/labb_5.dir/CPU.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labb_5.dir/CPU.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\CPU.cpp" -o CMakeFiles\labb_5.dir\CPU.cpp.s

# Object files for target labb_5
labb_5_OBJECTS = \
"CMakeFiles/labb_5.dir/main.cpp.obj" \
"CMakeFiles/labb_5.dir/CPU.cpp.obj"

# External object files for target labb_5
labb_5_EXTERNAL_OBJECTS =

labb_5.exe: CMakeFiles/labb_5.dir/main.cpp.obj
labb_5.exe: CMakeFiles/labb_5.dir/CPU.cpp.obj
labb_5.exe: CMakeFiles/labb_5.dir/build.make
labb_5.exe: CMakeFiles/labb_5.dir/linklibs.rsp
labb_5.exe: CMakeFiles/labb_5.dir/objects1.rsp
labb_5.exe: CMakeFiles/labb_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable labb_5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\labb_5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/labb_5.dir/build: labb_5.exe
.PHONY : CMakeFiles/labb_5.dir/build

CMakeFiles/labb_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\labb_5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/labb_5.dir/clean

CMakeFiles/labb_5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5" "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5" "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug" "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug" "C:\Users\Joel Olofsson\Documents\GitHub\programmeringsmetodik\labb_5\cmake-build-debug\CMakeFiles\labb_5.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/labb_5.dir/depend

