#ifndef DEMO_H
#define DEMO_H

#include <iostream>
#include <string>

class Demo
{
	int **d_entry;
	size_t d_size;

	public:
		Demo()	//Constructor
		:
			d_entry(new int*[1]),
			d_size(0)
		{
			std::cout << "This is a default constructor" 
						<< std::endl;
		}
		Demo(Demo const &other)	//Copy constructor
		:
			d_entry(new int*[other.d_size]),
			d_size(other.d_size)
		{
			std::cout << "This is a copy constructor" 
						<< std::endl;

			for (size_t index = 0; index < d_size; ++index)
				d_entry[index] = new int(*other.d_entry[index]);
		}
		Demo &operator=(Demo const &rvalue)	//CAO
		{
			std::cout << "This is a copy assignment operator" 
						<< std::endl;

			delete[] d_entry;

			d_size = rvalue.d_size;
			d_entry = new int*[d_size];

			for (size_t index = 0; index < d_size; ++index)
				d_entry[index] = new int(*rvalue.d_entry[index]);

			return *this;
		}
		~Demo()	//Destructor
		{
			std::cout << "This is a destructor" 
						<< std::endl;
			for (size_t index = 0; index < d_size; ++index)
				delete d_entry[index];
			delete[] d_entry;
		}
		Demo(Demo &&tmp)	//move constructor
		:
			d_entry(tmp.d_entry),
			d_size(tmp.d_size)
		{
			std::cout << "This is a move constructor" 
						<< std::endl;
			
			tmp.d_entry = 0;
			tmp.d_size = 0;
		}
		Demo &operator=(Demo &&other)	//MAO
		{
			std::cout << "This is a move assignment operator" 
						<< std::endl;

			delete[] d_entry;

			d_entry = other.d_entry;
			d_size = other.d_size;

			other.d_entry = 0;
			other.d_size = 0;

			return *this;
		}
};

#endif
