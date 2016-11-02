#include "strings.ih"

string Strings::at(size_t index)
{
	if (index > d_size)
		return " ";
	
	return *d_str[index];
}
