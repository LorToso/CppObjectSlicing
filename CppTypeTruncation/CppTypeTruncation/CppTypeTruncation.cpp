// CppTypeTruncation.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <exception>
#include <iostream>

class MyException : public std::exception
{
	const char * msg = "test";
	
	const char * what() const override
	{
		return msg;
	}
};
int main()
{
	try
	{
		throw MyException();
	}
	catch (std::exception & ex)
	{
		std::cout << "Message: " << ex.what() << std::endl;
	}
	getchar();
}

