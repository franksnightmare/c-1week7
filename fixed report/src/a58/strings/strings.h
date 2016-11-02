#ifndef STRINGS_H
#define STRINGS_H

#include <string>

class Strings
{
	std::string **d_str = new std::string*[1];
	std::size_t d_size = 0;
	std::size_t d_capacity = 1;
	
	public:
		Strings() = default;
		Strings(size_t argc, char **argv);
		Strings(char **environ);
		Strings(Strings const &other);
		Strings(Strings &&temp);
		~Strings();
		Strings &operator=(Strings const &rvalue);
		Strings &operator=(Strings &&temp);
		
		void swap(Strings &other);
		
		std::size_t size();
		std::size_t capacity();
		
		void resize(std::size_t size);
		void reserve(std::size_t size);
		
		void addString(std::string newString);
		void addString(char *charArray);
		
		std::string at(std::size_t index);
		std::string const at(std::size_t index) const;
	
	private:
		std::string **rawPointers(std::size_t amount);
};

#endif
