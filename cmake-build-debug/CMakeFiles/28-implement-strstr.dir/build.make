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
CMAKE_COMMAND = "D:\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CLionProjects\LeetCode-Cpp-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/28-implement-strstr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/28-implement-strstr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/28-implement-strstr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/28-implement-strstr.dir/flags.make

CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj: CMakeFiles/28-implement-strstr.dir/flags.make
CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj: ../leetcode/editor/cn/28-implement-strstr.cpp
CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj: CMakeFiles/28-implement-strstr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj -MF CMakeFiles\28-implement-strstr.dir\leetcode\editor\cn\28-implement-strstr.cpp.obj.d -o CMakeFiles\28-implement-strstr.dir\leetcode\editor\cn\28-implement-strstr.cpp.obj -c E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\28-implement-strstr.cpp

CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.i"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\28-implement-strstr.cpp > CMakeFiles\28-implement-strstr.dir\leetcode\editor\cn\28-implement-strstr.cpp.i

CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.s"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\28-implement-strstr.cpp -o CMakeFiles\28-implement-strstr.dir\leetcode\editor\cn\28-implement-strstr.cpp.s

# Object files for target 28-implement-strstr
28__implement__strstr_OBJECTS = \
"CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj"

# External object files for target 28-implement-strstr
28__implement__strstr_EXTERNAL_OBJECTS =

28-implement-strstr.exe: CMakeFiles/28-implement-strstr.dir/leetcode/editor/cn/28-implement-strstr.cpp.obj
28-implement-strstr.exe: CMakeFiles/28-implement-strstr.dir/build.make
28-implement-strstr.exe: CMakeFiles/28-implement-strstr.dir/linklibs.rsp
28-implement-strstr.exe: CMakeFiles/28-implement-strstr.dir/objects1.rsp
28-implement-strstr.exe: CMakeFiles/28-implement-strstr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 28-implement-strstr.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\28-implement-strstr.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/28-implement-strstr.dir/build: 28-implement-strstr.exe
.PHONY : CMakeFiles/28-implement-strstr.dir/build

CMakeFiles/28-implement-strstr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\28-implement-strstr.dir\cmake_clean.cmake
.PHONY : CMakeFiles/28-implement-strstr.dir/clean

CMakeFiles/28-implement-strstr.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLionProjects\LeetCode-Cpp-master E:\CLionProjects\LeetCode-Cpp-master E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles\28-implement-strstr.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/28-implement-strstr.dir/depend

