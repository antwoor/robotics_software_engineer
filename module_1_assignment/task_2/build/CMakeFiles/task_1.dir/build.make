# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /home/antwoor/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/antwoor/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build

# Include any dependencies generated for this target.
include CMakeFiles/task_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_1.dir/flags.make

CMakeFiles/task_1.dir/main.cpp.o: CMakeFiles/task_1.dir/flags.make
CMakeFiles/task_1.dir/main.cpp.o: /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/main.cpp
CMakeFiles/task_1.dir/main.cpp.o: CMakeFiles/task_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task_1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task_1.dir/main.cpp.o -MF CMakeFiles/task_1.dir/main.cpp.o.d -o CMakeFiles/task_1.dir/main.cpp.o -c /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/main.cpp

CMakeFiles/task_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/task_1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/main.cpp > CMakeFiles/task_1.dir/main.cpp.i

CMakeFiles/task_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/task_1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/main.cpp -o CMakeFiles/task_1.dir/main.cpp.s

CMakeFiles/task_1.dir/robot_class.cpp.o: CMakeFiles/task_1.dir/flags.make
CMakeFiles/task_1.dir/robot_class.cpp.o: /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/robot_class.cpp
CMakeFiles/task_1.dir/robot_class.cpp.o: CMakeFiles/task_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/task_1.dir/robot_class.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task_1.dir/robot_class.cpp.o -MF CMakeFiles/task_1.dir/robot_class.cpp.o.d -o CMakeFiles/task_1.dir/robot_class.cpp.o -c /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/robot_class.cpp

CMakeFiles/task_1.dir/robot_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/task_1.dir/robot_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/robot_class.cpp > CMakeFiles/task_1.dir/robot_class.cpp.i

CMakeFiles/task_1.dir/robot_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/task_1.dir/robot_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/robot_class.cpp -o CMakeFiles/task_1.dir/robot_class.cpp.s

# Object files for target task_1
task_1_OBJECTS = \
"CMakeFiles/task_1.dir/main.cpp.o" \
"CMakeFiles/task_1.dir/robot_class.cpp.o"

# External object files for target task_1
task_1_EXTERNAL_OBJECTS =

task_1: CMakeFiles/task_1.dir/main.cpp.o
task_1: CMakeFiles/task_1.dir/robot_class.cpp.o
task_1: CMakeFiles/task_1.dir/build.make
task_1: CMakeFiles/task_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable task_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_1.dir/build: task_1
.PHONY : CMakeFiles/task_1.dir/build

CMakeFiles/task_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_1.dir/clean

CMakeFiles/task_1.dir/depend:
	cd /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2 /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2 /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build /home/antwoor/rse_ws/src/robotics_software_engineer/module_1_assignment/task_2/build/CMakeFiles/task_1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/task_1.dir/depend

