#pragma once

#include <string>
#include <array>
#include <unordered_map>

using namespace std::string_literals;

inline const std::string guiFrameworkName = "GUIFramework";
inline const std::string guiFrameworkSettings = "GUIFrameworkSettings";
inline const std::string guiFrameworkLink = "GUIFrameworkLink";

inline const std::string guiFrameworkFolder = "GUIFrameworkLibrary";

inline const std::array<std::string, 2> configurationsToDelete = { "Debug|x86 = Debug|x86", "Release|x86 = Release|x86" };
inline const std::array<std::string, 1> linkingLibraries =
{
	"frameworkLibrary"
};

namespace extensions
{
	inline const std::string slnFile = ".sln";
	inline const std::string projFile = ".vcxproj";
}

namespace vsMacros
{
	inline const std::string solutionDir = "$(SolutionDir)";
}

namespace sln
{
	inline const std::string solutionFolderName = "Dependencies";

	inline const std::string visualCPlusPlusProjectGUID = R"("{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942}")";
	inline const std::string solutionFolderProjectGUID = R"("{2150E333-8FDC-42A3-9474-1A3956D46DE8}")";

	inline constexpr std::array<std::string_view, 2> buildConfigurations = { "Build.0", "ActiveCfg" };

	inline const std::string endProject = "EndProject";
	inline const std::string projectConfigurationPlatforms = "GlobalSection(ProjectConfigurationPlatforms) = postSolution";
	inline const std::string startGlobalSection = "GlobalSection";
	inline const std::string endGlobalSection = "EndGlobalSection";
	inline const std::string nestedProjects = "(NestedProjects)";
	inline const std::string postSolution = "postSolution";
	inline const std::string preSolution = "preSolution";
}

namespace vcxproj
{
	inline const std::string clCompileTag = "<ClCompile>";
	inline const std::string startAdditionalIncludeDirectoriesTag = "<AdditionalIncludeDirectories>";
	inline const std::string endAdditionalIncludeDirectoriesTag = "</AdditionalIncludeDirectories>";

	inline const std::string startAdditionalDependenciesTag = "<AdditionalDependencies>";
	inline const std::string endAdditionalDependenciesTag = "</AdditionalDependencies>";

	inline const std::string startAdditionalLibraryDirectoriesTag = "<AdditionalLibraryDirectories>";
	inline const std::string endAdditionalLibraryDirectoriesTag = "</AdditionalLibraryDirectories>";

	inline const std::string startLinkTag = "<Link>";
	inline const std::string endLinkTag = "</Link>";

	inline const std::string startItemDefinitionGroupTag = "<ItemDefinitionGroup>";
	inline const std::string endItemDefinitionGroupTag = "</ItemDefinitionGroup>";

	inline const std::string startItemGroupTag = "<ItemGroup>";
	inline const std::string endItemGroupTag = "</ItemGroup>";

	inline const std::string startProjectTag = "<Project>";
	inline const std::string endProjectTag = "</Project>";

	inline const std::string additionalDependenciesMacro = "%(AdditionalDependencies)";
}

namespace inside_projects
{
	inline const std::unordered_map<std::string, std::string> insideProjectFiles =	//project name - project file path
	{
		
	};

	inline const std::unordered_map<std::string, std::string> insideProjectIncludeDirectories =	//project name - path to directory with source files
	{
		
	};
}
