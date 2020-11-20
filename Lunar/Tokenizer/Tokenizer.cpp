#include "Tokenizer.h"

using namespace Lunar::Tokenizer;

Tokenizer::Tokenizer() {
	Tokens = new std::map<int,Token>();
	Tokens[kw_if] = Token(kw_if, std::regex("^if"));
	Tokens[kw_else] = Token(kw_else, std::regex("^else"));
	Tokens[kw_return] = Token(kw_return, std::regex("^return"));

	Tokens[kw_switch] = Token(kw_switch, std::regex("^switch"));
	Tokens[kw_case] = Token(kw_case, std::regex("^case"));
	Tokens[kw_defualt] = Token(kw_defualt, std::regex("^defualt"));

	Tokens[kw_for] = Token(kw_for, std::regex("^for"));
	Tokens[kw_while] = Token(kw_while, std::regex("^while"));
	Tokens[kw_do] = Token(kw_do, std::regex("^do"));

	Tokens[kw_break] = Token(kw_break, std::regex("^break"));
	Tokens[kw_string] = Token(kw_string, std::regex("^'[^']*'"));
	Tokens[kw_int] = Token(kw_int, std::regex("^\\d+"));
}