/*
 * CrossCompTest.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: eltoddo@gmail.com
 *      Description : A simple set of code to do a basic sanity check that I can write one source file
 *      	and target multiple platforms. Simply echos the PATH environment variable.
 *      	Designed to be built using GCC targeting windows (Cygwin) or Raspberry Pi.
 *
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	cout << "Cross Compile Test." << endl;

	if (const char* env_p = getenv("PATH")) {
		cout << "PATH Environment variable is: " << endl << env_p << endl;
		return 0;
	}
	else {
		cout << "Could not get PATH environment variable." << endl;
		return 1;
	}
}
