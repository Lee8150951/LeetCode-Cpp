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
include CMakeFiles/1-two-sum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/1-two-sum.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/1-two-sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1-two-sum.dir/flags.make

CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj: CMakeFiles/1-two-sum.dir/flags.make
CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj: ../leetcode/editor/cn/1-two-sum.cpp
CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj: CMakeFiles/1-two-sum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj -MF CMakeFiles\1-two-sum.dir\leetcode\editor\cn\1-two-sum.cpp.obj.d -o CMakeFiles\1-two-sum.dir\leetcode\editor\cn\1-two-sum.cpp.obj -c E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\1-two-sum.cpp

CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.i"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\1-two-sum.cpp > CMakeFiles\1-two-sum.dir\leetcode\editor\cn\1-two-sum.cpp.i

CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.s"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\1-two-sum.cpp -o CMakeFiles\1-two-sum.dir\leetcode\editor\cn\1-two-sum.cpp.s

# Object files for target 1-two-sum
1__two__sum_OBJECTS = \
"CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj"

# External object files for target 1-two-sum
1__two__sum_EXTERNAL_OBJECTS =

1-two-sum.exe: CMakeFiles/1-two-sum.dir/leetcode/editor/cn/1-two-sum.cpp.obj
1-two-sum.exe: CMakeFiles/1-two-sum.dir/build.make
1-two-sum.exe: CMakeFiles/1-two-sum.dir/linklibs.rsp
1-two-sum.exe: CMakeFiles/1-two-sum.dir/objects1.rsp
1-two-sum.exe: CMakeFiles/1-two-sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1-two-sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1-two-sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1-two-sum.dir/build: 1-two-sum.exe
.PHONY : CMakeFiles/1-two-sum.dir/build

CMakeFiles/1-two-sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1-two-sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1-two-sum.dir/clean

CMakeFiles/1-two-sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLionProjects\LeetCode-Cpp-master E:\CLionProjects\LeetCode-Cpp-master E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles\1-two-sum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1-two-sum.dir/depend
