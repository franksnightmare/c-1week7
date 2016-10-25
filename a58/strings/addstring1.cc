#include "strings.ih"

void Strings::addString(string newString)
{
	reserve(d_size + 1);
	
	d_str[d_size] = new string;
	*d_str[d_size] = newString;
	
	++d_size;
}
