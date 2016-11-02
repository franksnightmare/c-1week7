#include "strings.ih"

Strings::Strings(Strings const &other)
:
	d_str(new string *[other.d_capacity]),
	d_size(other.d_size),
	d_capacity(other.d_capacity)
{
	for (size_t index = 0; index != d_size; ++index)
		d_str[index] = new string(*other.d_str[index]);
}
