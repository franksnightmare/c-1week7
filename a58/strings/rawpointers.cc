#include "strings.ih"

string **Strings::rawPointers(size_t amount)
{
	string **ptr = new string*[amount];
	return ptr;
}
