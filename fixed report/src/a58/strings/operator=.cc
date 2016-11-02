#include "strings.ih"

Strings &Strings::operator=(Strings const &rvalue)
{
	return *this = Strings(rvalue);
}
