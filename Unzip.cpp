#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include "Unzip.h"

using namespace std;

void unzip() {
	ifstream inFile("results.txt");
	ofstream outFile("decompressed.txt");
	map<int, string> m;
	string line,word,thesi;
	int ithesi, space_pos;
		
	while (getline(inFile, line)) {
		space_pos = line.find(" ");
		word = line.substr(0, space_pos);
		line = line.substr(space_pos + 1);
		cout << word << " ";
		while ((space_pos = line.find(" ")) > -1) {
			thesi = line.substr(0, space_pos);
			ithesi = stoi(thesi);
			line = line.substr(space_pos + 1);
			m[ithesi] = word;
			cout << ithesi << " ";
		}
		cout << endl;
	/*	ithesi = stoi(line);
		m[ithesi] = word;*/

		//map<int, string>::iterator it;
		for (int i = 0; i <= 10; i++) {
			outFile <<m[i] << " ";
		}
	}

	outFile.close();
	inFile.close();
}
