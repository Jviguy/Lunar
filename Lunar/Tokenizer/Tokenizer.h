#pragma once
#include "Token.h"
#include <map>

namespace Lunar {
	namespace Tokenizer {
		class Tokenizer {
		public:
			Tokenizer();
			//returns a instance of the token of that value or throws an exception
			Token GetToken(int name);
		private:
			std::map<int, Token> Tokens;
		};
		enum BaseTokens
		{
			kw_if,
			kw_else,
			kw_return,

			kw_switch,
			kw_case,
			kw_defualt,

			kw_for,
			kw_while,
			kw_do,

			kw_break,
			kw_int,
			kw_string,
		};
	}
}