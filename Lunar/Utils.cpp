#include "Lunar.h"

std::string Lunar::Utils::FindUsableFile(char* name) {
	struct stat buffer;
	if (stat(name, &buffer) == 0) {
		char buff[MAX_PATH];
		auto tmp = std::string(GetCurrentDir(buff,MAX_PATH)).append(name);
		memset(&buffer,0,sizeof buffer);
		if (stat(tmp.c_str(), &buffer) != 0) {
			return std::string(GetCurrentDir(buff, MAX_PATH)).append("\\").append(name);
		}
	}
	throw Lunar::Exceptions::FileNotFoundException();
}

void Lunar::Utils::ChangeTextColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

void Lunar::Utils::Error(const char* error) {
	Lunar::Utils::ChangeTextColor(4);
	std::cout << error;
	exit(1);
}

void Lunar::Utils::Warning(const char* warning) {
	Lunar::Utils::ChangeTextColor(5);
	std::cout << warning;
}