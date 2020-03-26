#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	string data;

	// Writing to file
	ofstream file;
	file.open("file.dat", ios::out);

	cout << "Writing to file\n";
	
	cout << "Enter your name: ";
	cin >> data;
	file << data << endl;

	file.close();

	// Reading from file
	ifstream inFile;
	inFile.open("file.dat");

	cout << "Reading data\n";

	inFile >> data;
	cout << data << endl;

	inFile.close();

	return 0;
}