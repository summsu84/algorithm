# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\dwarf.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\dwarf.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\dwarf.dir\flags.make

CMakeFiles\dwarf.dir\main.c.obj: CMakeFiles\dwarf.dir\flags.make
CMakeFiles\dwarf.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dwarf.dir/main.c.obj"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\dwarf.dir\main.c.obj /FdCMakeFiles\dwarf.dir\ /FS -c D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\main.c
<<

CMakeFiles\dwarf.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dwarf.dir/main.c.i"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\dwarf.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\main.c
<<

CMakeFiles\dwarf.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dwarf.dir/main.c.s"
	C:\PROGRA~2\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\dwarf.dir\main.c.s /c D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\main.c
<<

# Object files for target dwarf
dwarf_OBJECTS = \
"CMakeFiles\dwarf.dir\main.c.obj"

# External object files for target dwarf
dwarf_EXTERNAL_OBJECTS =

dwarf.exe: CMakeFiles\dwarf.dir\main.c.obj
dwarf.exe: CMakeFiles\dwarf.dir\build.make
dwarf.exe: CMakeFiles\dwarf.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable dwarf.exe"
	"D:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\dwarf.dir --manifests  -- C:\PROGRA~2\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\dwarf.dir\objects1.rsp @<<
 /out:dwarf.exe /implib:dwarf.lib /pdb:D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug\dwarf.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\dwarf.dir\build: dwarf.exe

.PHONY : CMakeFiles\dwarf.dir\build

CMakeFiles\dwarf.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dwarf.dir\cmake_clean.cmake
.PHONY : CMakeFiles\dwarf.dir\clean

CMakeFiles\dwarf.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug D:\workspace\ccppProject\algorithm_practice\algorithm_practice\dwarf\cmake-build-debug\CMakeFiles\dwarf.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\dwarf.dir\depend

