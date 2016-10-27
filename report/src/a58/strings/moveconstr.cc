#include "strings.ih"

Strings::Strings(Strings &&temp)
:
	d_str(temp.d_str),
	d_size(temp.d_size),
	d_capacity(temp.d_capacity)
{
	temp.d_str = 0;
	temp.d_size = 0;
	temp.d_capacity = 0;
}
