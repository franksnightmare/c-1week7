#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
{
	for (size_t index = 0; index != argc; ++index)
		addString(argv[index]);
}
