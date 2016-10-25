#include "strings.ih"

string const Strings::at(size_t index) const
{
	if (index > d_size)
		return " ";
	
	return *d_str[index];
}
