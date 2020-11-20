#include "Exceptions.h"

const char* Lunar::Exceptions::FileNotFoundException::Error() const throw() {
	return "Couldn't Find that file!";
}