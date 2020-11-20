#include "Exceptions.h"

const char* Lunar::Exceptions::UnknownTokenException::Error() const throw() {
	return "Unknown token found in file";
}