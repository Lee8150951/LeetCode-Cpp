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
include CMakeFiles/58-length-of-last-word.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/58-length-of-last-word.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/58-length-of-last-word.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/58-length-of-last-word.dir/flags.make

CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj: CMakeFiles/58-length-of-last-word.dir/flags.make
CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj: ../leetcode/editor/cn/58-length-of-last-word.cpp
CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj: CMakeFiles/58-length-of-last-word.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj -MF CMakeFiles\58-length-of-last-word.dir\leetcode\editor\cn\58-length-of-last-word.cpp.obj.d -o CMakeFiles\58-length-of-last-word.dir\leetcode\editor\cn\58-length-of-last-word.cpp.obj -c E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\58-length-of-last-word.cpp

CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.i"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\58-length-of-last-word.cpp > CMakeFiles\58-length-of-last-word.dir\leetcode\editor\cn\58-length-of-last-word.cpp.i

CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.s"
	"D:\JetBrains\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CLionProjects\LeetCode-Cpp-master\leetcode\editor\cn\58-length-of-last-word.cpp -o CMakeFiles\58-length-of-last-word.dir\leetcode\editor\cn\58-length-of-last-word.cpp.s

# Object files for target 58-length-of-last-word
58__length__of__last__word_OBJECTS = \
"CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj"

# External object files for target 58-length-of-last-word
58__length__of__last__word_EXTERNAL_OBJECTS =

58-length-of-last-word.exe: CMakeFiles/58-length-of-last-word.dir/leetcode/editor/cn/58-length-of-last-word.cpp.obj
58-length-of-last-word.exe: CMakeFiles/58-length-of-last-word.dir/build.make
58-length-of-last-word.exe: CMakeFiles/58-length-of-last-word.dir/linklibs.rsp
58-length-of-last-word.exe: CMakeFiles/58-length-of-last-word.dir/objects1.rsp
58-length-of-last-word.exe: CMakeFiles/58-length-of-last-word.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 58-length-of-last-word.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\58-length-of-last-word.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/58-length-of-last-word.dir/build: 58-length-of-last-word.exe
.PHONY : CMakeFiles/58-length-of-last-word.dir/build

CMakeFiles/58-length-of-last-word.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\58-length-of-last-word.dir\cmake_clean.cmake
.PHONY : CMakeFiles/58-length-of-last-word.dir/clean

CMakeFiles/58-length-of-last-word.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLionProjects\LeetCode-Cpp-master E:\CLionProjects\LeetCode-Cpp-master E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug E:\CLionProjects\LeetCode-Cpp-master\cmake-build-debug\CMakeFiles\58-length-of-last-word.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/58-length-of-last-word.dir/depend

