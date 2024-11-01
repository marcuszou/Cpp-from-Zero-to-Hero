#include <iostream>
#include <fstream>

using namespace std;

/*
 * - Working with File Stream
 */

int main(){

	fstream file;
	// ios mode - in: input, out: output, app: append, binary: binary
	file.open("file.txt", ios::in | ios::out | ios::app | ios::binary);
	if (file.is_open())
	{
		file.close();
	}

	return 0;
}
