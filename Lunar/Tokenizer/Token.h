#pragma once
#include <iostream>
#include <regex>

namespace Lunar {
	namespace Tokenizer {
		class Token {
		public:
			Token(int t,std::regex regex);
			std::smatch Match(std::string s);
			std::cmatch CMatch(const char* ch);
		private:
			std::regex re;
			int type;
		};
	}
}