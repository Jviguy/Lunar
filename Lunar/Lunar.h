#pragma once
#include "Exceptions.h"
#include <iostream>
#include <windows.h>
#include <sys/stat.h>
#include <direct.h>
#define GetCurrentDir _getcwd

namespace Lunar {
	class Utils
	{
	public:
		//This function is used for Finding a usable file states by input or the current dir plus its name
		static std::string FindUsableFile(char* name);
		//Used to change the text color in the CLI
		static void ChangeTextColor(int color);
		//Used to error with invalid usages and other things
		static void Error(const char* error);
		//Used to display warnings
		static void Warning(const char* warning);
	protected:
	private:
	};
}