#include <fstream>
#include <iomanip>

using namespace std;

/*
 * - FILE STREAM CLASSES
 *   -- ifstream - Input File Stream :- reading
 *   -- ofstream - Output File Stream :- writing
 *   -- fstream - Input and Output file streams :- reading and writing
 */

// Writing to Text/CSV files

int main(){
	ofstream file;
	file.open("data.csv");
	if(file.is_open())
	{
		file << "id,title,year\n"
			 << "1,Terminator 1,1984\n"
			 << "2,Terminator 2,1987\n";
		file.close();
	}

	return 0;
}
