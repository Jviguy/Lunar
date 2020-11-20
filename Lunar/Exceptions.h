#pragma once
#include <iostream>
#include <exception>

namespace Lunar {
	namespace Exceptions {
		class FileNotFoundException : public std::exception
		{
		public:
			const char* Error() const throw ();
		protected:
		private:
		};
	}
}