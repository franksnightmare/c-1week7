#include "strings.ih"

Strings::Strings(char **environ)
{
	while (*environ != NULL)
		addString(*environ);
}
