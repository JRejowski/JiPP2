# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\CLionProjects\JiPP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

# Include any dependencies generated for this target.
include Lab3\firstClass\CMakeFiles\firstClass.dir\depend.make
# Include the progress variables for this target.
include Lab3\firstClass\CMakeFiles\firstClass.dir\progress.make

# Include the compile flags for this target's objects.
include Lab3\firstClass\CMakeFiles\firstClass.dir\flags.make

Lab3\firstClass\CMakeFiles\firstClass.dir\src\main.cpp.obj: Lab3\firstClass\CMakeFiles\firstClass.dir\flags.make
Lab3\firstClass\CMakeFiles\firstClass.dir\src\main.cpp.obj: ..\Lab3\firstClass\src\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Lab3/firstClass/CMakeFiles/firstClass.dir/src/main.cpp.obj"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\firstClass.dir\src\main.cpp.obj /FdCMakeFiles\firstClass.dir\ /FS -c C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass\src\main.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\src\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstClass.dir/src/main.cpp.i"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\firstClass.dir\src\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass\src\main.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\src\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstClass.dir/src/main.cpp.s"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\firstClass.dir\src\main.cpp.s /c C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass\src\main.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.obj: Lab3\firstClass\CMakeFiles\firstClass.dir\flags.make
Lab3\firstClass\CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.obj: ..\Lab3\firstClass\src\MyFirstClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Lab3/firstClass/CMakeFiles/firstClass.dir/src/MyFirstClass.cpp.obj"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\firstClass.dir\src\MyFirstClass.cpp.obj /FdCMakeFiles\firstClass.dir\ /FS -c C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass\src\MyFirstClass.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstClass.dir/src/MyFirstClass.cpp.i"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass\src\MyFirstClass.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstClass.dir/src/MyFirstClass.cpp.s"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\firstClass.dir\src\MyFirstClass.cpp.s /c C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass\src\MyFirstClass.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.obj: Lab3\firstClass\CMakeFiles\firstClass.dir\flags.make
Lab3\firstClass\CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.obj: ..\Lab3\structExercise\src\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Lab3/firstClass/CMakeFiles/firstClass.dir/__/structExercise/src/main.cpp.obj"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.obj /FdCMakeFiles\firstClass.dir\ /FS -c C:\Users\Admin\CLionProjects\JiPP2\Lab3\structExercise\src\main.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstClass.dir/__/structExercise/src/main.cpp.i"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Admin\CLionProjects\JiPP2\Lab3\structExercise\src\main.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

Lab3\firstClass\CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstClass.dir/__/structExercise/src/main.cpp.s"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.s /c C:\Users\Admin\CLionProjects\JiPP2\Lab3\structExercise\src\main.cpp
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

# Object files for target firstClass
firstClass_OBJECTS = \
"CMakeFiles\firstClass.dir\src\main.cpp.obj" \
"CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.obj" \
"CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.obj"

# External object files for target firstClass
firstClass_EXTERNAL_OBJECTS =

Lab3\firstClass\firstClass.exe: Lab3\firstClass\CMakeFiles\firstClass.dir\src\main.cpp.obj
Lab3\firstClass\firstClass.exe: Lab3\firstClass\CMakeFiles\firstClass.dir\src\MyFirstClass.cpp.obj
Lab3\firstClass\firstClass.exe: Lab3\firstClass\CMakeFiles\firstClass.dir\__\structExercise\src\main.cpp.obj
Lab3\firstClass\firstClass.exe: Lab3\firstClass\CMakeFiles\firstClass.dir\build.make
Lab3\firstClass\firstClass.exe: Lab3\firstClass\CMakeFiles\firstClass.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable firstClass.exe"
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\firstClass.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\firstClass.dir\objects1.rsp @<<
 /out:firstClass.exe /implib:firstClass.lib /pdb:C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass\firstClass.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug

# Rule to build all files generated by this target.
Lab3\firstClass\CMakeFiles\firstClass.dir\build: Lab3\firstClass\firstClass.exe
.PHONY : Lab3\firstClass\CMakeFiles\firstClass.dir\build

Lab3\firstClass\CMakeFiles\firstClass.dir\clean:
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass
	$(CMAKE_COMMAND) -P CMakeFiles\firstClass.dir\cmake_clean.cmake
	cd C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug
.PHONY : Lab3\firstClass\CMakeFiles\firstClass.dir\clean

Lab3\firstClass\CMakeFiles\firstClass.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Admin\CLionProjects\JiPP2 C:\Users\Admin\CLionProjects\JiPP2\Lab3\firstClass C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass C:\Users\Admin\CLionProjects\JiPP2\cmake-build-debug\Lab3\firstClass\CMakeFiles\firstClass.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Lab3\firstClass\CMakeFiles\firstClass.dir\depend

