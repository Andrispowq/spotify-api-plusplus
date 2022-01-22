project "spotify-api-plusplus"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	includedirs
	{
        "%{prj.location}/Dependencies/curl/include",
		"src",
		"src/models",
		"src/utils"
	}

	files
	{
		"src/**.h",
		"src/**.cpp"
	}

	defines
	{
		"CURL_STATICLIB"
	}
	
	filter "system:windows"
		systemversion "latest"

		defines
		{
			"_CRT_SECURE_NO_WARNINGS"
		}

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"
