#include "strings.ih"

Strings &Strings::operator=(Strings &&temp)
{
	swap(temp);
	return *this;
}
