#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*
 * - READING from Binary Files
 *   -- Text files
 *   -- Binary files (images, audio files, PDFs, etc)
 */

int main(){

	int numbers[3];
	// Step 1 - writing to a text file
	ifstream file("numbers.dat", ios::binary);
	if(file.is_open())
	{
		int number;
		while (file.read(reinterpret_cast<char*>(&number), sizeof(number)))
			cout << number << endl;
		file.close();
	}

	return 0;
}
