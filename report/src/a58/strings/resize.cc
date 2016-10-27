#include "strings.ih"

// If the array shrinks then the strings that fall
// outside of the array will be removed
void Strings::resize(size_t size)
{
	if (size > d_capacity)
	{
		reserve(size);
		for (size_t index = d_size; index != size; ++size)
			d_str[index] = new string;
	}
	else
	{
		for (size_t index = size; index != d_size; ++size)
		{
			delete d_str[index];
			d_str[index] = new string;
		}
		d_size = size;
	}
}
