#include "Tokenizer.h"

using namespace Lunar::Tokenizer;

Token::Token(int t,std::regex regex) {
	re = regex;
	type = t;
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
