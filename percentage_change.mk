##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=percentage_change
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/MyTemp/Cplus/ws
ProjectPath            :=C:/MyTemp/Cplus/ws/percentage_change
IntermediateDirectory  :=../build-$(ConfigurationName)/percentage_change
OutDir                 :=../build-$(ConfigurationName)/percentage_change
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=IlkkaKotilainen
Date                   :=09/01/2022
CodeLitePath           :=C:/devel/CodeLite
LinkerName             :=C:/devel/mingw/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/devel/mingw/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/devel/mingw/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/devel/mingw/mingw64/bin/ar.exe rcu
CXX      := C:/devel/mingw/mingw64/bin/g++.exe
CC       := C:/devel/mingw/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/devel/mingw/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\devel\CodeLite
Objects0=../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/percentage_change/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\percentage_change" mkdir "..\build-$(ConfigurationName)\percentage_change"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\percentage_change" mkdir "..\build-$(ConfigurationName)\percentage_change"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/percentage_change/.d:
	@if not exist "..\build-$(ConfigurationName)\percentage_change" mkdir "..\build-$(ConfigurationName)\percentage_change"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(ObjectSuffix): percentage_change.cpp ../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/MyTemp/Cplus/ws/percentage_change/percentage_change.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/percentage_change.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(DependSuffix): percentage_change.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(DependSuffix) -MM percentage_change.cpp

../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(PreprocessSuffix): percentage_change.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/percentage_change/percentage_change.cpp$(PreprocessSuffix) percentage_change.cpp


-include ../build-$(ConfigurationName)/percentage_change//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


