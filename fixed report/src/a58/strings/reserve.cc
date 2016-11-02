#include "strings.ih"

// Only reserves if the requested size exceeds the capacity.
void Strings::reserve(size_t size)
{
	if (size > d_capacity)
	{
		size = ceil(log2(size));
		size = 1 << size;
		
		string **raw = rawPointers(size);
		for (size_t index = 0; index != d_size; ++index)
			raw[index] = d_str[index];
		
		delete[] d_str;
		
		d_str = raw;
		d_capacity = size;
	}
}
