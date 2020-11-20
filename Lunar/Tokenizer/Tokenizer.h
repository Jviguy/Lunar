#pragma once
#include "Token.h"

namespace Lunar {
	namespace Tokenizer {
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