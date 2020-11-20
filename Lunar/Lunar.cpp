//The header to all the good stuff
#include "Lunar.h"

//the entry point
int main(int argc, char* args[]) {
	if (args[1] == nullptr) {
		Lunar::Utils::Error("ERROR Improper Arguments");
	}
	try {
		auto file = Lunar::Utils::FindUsableFile(args[1]);
		Lunar::Utils::Warning(file.c_str());
	} catch (Lunar::Exceptions::FileNotFoundException e) {
		Lunar::Utils::Error(e.Error());
	}
}