#include "Tokenizer.h"

using namespace Lunar::Tokenizer;

Token::Token(std::string chr,std::regex regex) {
	re = regex;
	character = chr;
}

std::smatch Token::Match(std::string s)
{
	std::smatch sm =  std::smatch();
	std::regex_match(s, sm, re);
	return sm;
}

std::cmatch Token::CMatch(const char* ch) {
	std::cmatch cm = std::cmatch();
	std::regex_match(ch, cm, re);
	return cm;
}