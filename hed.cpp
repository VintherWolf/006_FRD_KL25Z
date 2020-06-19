/*
 * main.cpp
 *
 *  Created on: 25 Jun 2016
 *      Author: klaus
 */

#include <iostream> // Notice no .h

using namespace std;
/*
   When using a lot of standard functions
	 like the ones kept in iostream we shall
	 Use the namespace std.
	 Otherwise use for instance std::cout
*/

int main (int argC, char **argV)
{
	unsigned repetitions = 5;
	char str[20];

	str = "Hello World\0";
	// Say Hello World five times
	// Nothing much new here
	displayStringOnStdOut(char * str) {
	cout << str << endl;

	}


	for (int index = 0; index < repetitions; ++index)
	{	// cout is our connection to stdout
		// as are cerr our connection to stderr
		displayStringOnStdOut(*str)
		// Notice here that you can build up a stream of
		// output. endl is endLine or \n as you were used
		// to in C's printf
	}

	
	char input = 'i';
	cout << "To exit, press 'm' then the 'Enter' key." << endl;
	// cin is our connection to stdin
	cin >> input;
	while (input != 'm')
	{ // Also in C++ the line is terminated with a ; - so long
		// lines can be broken on to two or more lines as shown here
		cout << "You just entered '" << input << "'. "
		    << "You need to enter 'm' to exit." << endl;
		cin >> input;
	}
	cout << "Thank you. Exiting." << endl;
	return 0;
}





