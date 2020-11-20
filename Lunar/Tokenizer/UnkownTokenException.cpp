#include "Exceptions.h"

const char* Lunar::Exceptions::UnknownTokenException::Error() const throw() {
	return "Error Parsing file Unknown token detected!";
}