# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicio36.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio36.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio36.dir/flags.make

CMakeFiles/Ejercicio36.dir/main.cpp.obj: CMakeFiles/Ejercicio36.dir/flags.make
CMakeFiles/Ejercicio36.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio36.dir/main.cpp.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio36.dir\main.cpp.obj -c C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\main.cpp

CMakeFiles/Ejercicio36.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio36.dir/main.cpp.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\main.cpp > CMakeFiles\Ejercicio36.dir\main.cpp.i

CMakeFiles/Ejercicio36.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio36.dir/main.cpp.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\main.cpp -o CMakeFiles\Ejercicio36.dir\main.cpp.s

# Object files for target Ejercicio36
Ejercicio36_OBJECTS = \
"CMakeFiles/Ejercicio36.dir/main.cpp.obj"

# External object files for target Ejercicio36
Ejercicio36_EXTERNAL_OBJECTS =

Ejercicio36.exe: CMakeFiles/Ejercicio36.dir/main.cpp.obj
Ejercicio36.exe: CMakeFiles/Ejercicio36.dir/build.make
Ejercicio36.exe: CMakeFiles/Ejercicio36.dir/linklibs.rsp
Ejercicio36.exe: CMakeFiles/Ejercicio36.dir/objects1.rsp
Ejercicio36.exe: CMakeFiles/Ejercicio36.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ejercicio36.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio36.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio36.dir/build: Ejercicio36.exe

.PHONY : CMakeFiles/Ejercicio36.dir/build

CMakeFiles/Ejercicio36.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio36.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio36.dir/clean

CMakeFiles/Ejercicio36.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36 C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36 C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\cmake-build-debug C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\cmake-build-debug C:\Users\mathias.salva\CLionProjects\git-tuto\AyED_Ejercicios\Ejercicio36\cmake-build-debug\CMakeFiles\Ejercicio36.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio36.dir/depend

