#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*
 * - Writing to Binary Files
 *   -- Text files
 *   -- Binary files (images, audio files, PDFs, etc)
 */

int main(){

	int numbers[] = {1'000'000, 2'000'000, 3'000'000};
	// Step 1 - writing to a text file
	ofstream file("numbers.txt");
	if(file.is_open())
	{
		for (auto number: numbers)
			file << number << endl;
		file.close();
	}

	// Observation 1:
	// The file numbers.txt is located in "cmake-build-debug" sub-folder.
	// Go to terminal to run "ls -la", the file numbers.txt is 24 bytes, why?
	// "1000000", is 7-bytes. and there is a hidden '\n', then it's 8-bytes in total.
	// 8 * 3 = 24

	// Step 2 - writing to a binary file
	// comment out all of Step 1 code
	/* ofstream file("numbers.dat", ios::binary);
	if(file.is_open())
	{
		file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
		file.close();
	}
	*/
	// Observation 2:
	// The file numbers.dat is also located in "cmake-build-debug" sub-folder.
	// "ls -la" in terminal windows shows the file numbers.dat is only 12 bytes,
	// becasue every integer consumes 4 bytes in the memory, then 3 integers take 12 bytes.

	return 0;
}
