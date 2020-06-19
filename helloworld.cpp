////////////////////////////////////////////////////////////////////////////////
// 	Source File	:	main.cpp
//	Author		: DWolf
//  Date		: 14 Aug 2019
//	Version		:
//
//	Description	:
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string.h>
//#include <cstdlib>

#include "helloworld.h"

using namespace std;
#define Buflen 20

int main(int argC, char **argV)
{
	unsigned repetitions = 5;
	char str[Buflen];

	strncpy(str, "Hello World", Buflen);

	for (unsigned index = 0; index < repetitions; index++)
	{
		displayStringOnStdOut(str);
	}

	char input = 'i';
	cout << "To exit, press 'm' then the 'Enter' key." << endl;

	cin >> input;
	while (input != 'm')
	{
		cout << "You just entered '" << input << "'. "
			 << "You need to enter 'm' to exit." << endl;
		cin >> input;
	}
	cout << "Thank you. Exiting." << endl;
	return 0;
}

void displayStringOnStdOut(char *str)
{
	cout << str << endl;
}
