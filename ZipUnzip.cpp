#include <iostream>
#include <string>
#include "Unzip.h"
#include "Zip.h"

using namespace std;

int main(int argc,  char** argv){
	string usage = "Usage:\n	ZipUnzip zip filename\nA results.txt file will be the output.\nUsage:\n	ZipUnzip unzip filename\nA decompressed.txt file will be the output.\n ";
	if (argc != 3) {
		cout  << "Too few arguments" << endl;
		cout << usage;
		exit(1);
	}
	
	if (string(argv[1]) == "zip") {
		cout << "Zipping file " << argv[2] << endl;
		zip(string(argv[2]));
	}else if(string(argv[1]) == "unzip") {
		cout << "Decompressing file " << argv[2] << endl;
		unzip(argv[2]);
	}
	else {
		cout << "Wrong arguments!" << endl;
		cout << usage;
		exit(2);
	}

	return 0;
}
