#ifndef CCSL_TYPES_H
#define CCSL_TYPES_H

#include <iostream>

namespace CCSL::Types
{
	template<class T>
	struct _ByteBuffer
	{
	public:
		_ByteBuffer();

	private:
		std::unique_ptr<T[]> _buffer;
		size_t _size = 0;

	};

}

#endif // !CCSL_TYPES_H
