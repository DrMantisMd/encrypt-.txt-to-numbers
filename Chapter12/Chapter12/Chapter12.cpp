/*
Armando Castro
Chapter 12
Problem 9 
<File Encryption>

*/

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
bool openFileIn(fstream &, string);
void encryptCh(fstream &);

int main()
{	
	int asciival;
	string filename;
	char ch;
	ifstream inputFile;
	ofstream outputFile;

	inputFile.open("PokemonThemeSong.txt");
	outputFile.open("EncryptPokemonSong.txt");

	if (inputFile)
	{
		cout << " The File opened correctly" << endl;
		inputFile.get(ch);
		

		while (!inputFile.eof())
		{
			
			asciival = 10 + static_cast<int>(ch);
			outputFile << asciival<< ' '; 
			inputFile.get(ch);
		}

		inputFile.close();
		outputFile.close();
		cout << " The song is Secure ! " << endl;
	}

	else
		cout << " File didnt open correctly!! " << endl;

	return 0;
}
