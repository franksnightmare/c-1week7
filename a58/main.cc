#include <iostream>
#include <utility>
#include "main.h"
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
	Strings strings1(argc, argv);
	//Strings strings2(environ);
	
	Strings temp = Strings();
	Strings strings2(std::move(temp));
	
	strings2 = strings1;
	
	if (strings1.size() >= 5)
		strings2.addString(strings1.at(4));
	
	for (size_t index = 0; index != strings1.size(); ++index)
	{
		cout << strings1.at(index) << '\n';
	}
	
	cout << '\n';
	
	for (size_t index = 0; index != strings2.size(); ++index)
	{
		cout << strings2.at(index) << '\n';
	}
}
