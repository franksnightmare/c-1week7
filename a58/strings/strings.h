#ifndef STRINGS_H
#define STRINGS_H

#include <cstddef>
#include <string>

class Strings
{
	std::string **d_str = new std::string*[1];
	size_t d_size = 0;
	size_t d_capacity = 1;
	
	public:
		Strings() = default;
		Strings(size_t argc, char **argv);
		Strings(char **environ);
		Strings(Strings const &other);
		Strings(Strings &&temp);
		~Strings();
		Strings &operator=(Strings const &rvalue);
		
		void swap(Strings &other);
		
		size_t size();
		size_t capacity();
		
		void resize(size_t size);
		void reserve(size_t size);
		
		void addString(std::string newString);
		void addString(char *charArray);
		
		std::string at(size_t index);
		std::string const at(size_t index) const;
		
		std::string **rawPointers(size_t amount);
};

#endif
