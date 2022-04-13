#include <iostream>
#include <string>
//#include <map>
//#include <fstream>
//#include <vector>
#include "Unzip.h"
#include "Zip.h"

using namespace std;

int main(int argc,  char** argv){
	if (argc != 3) {
		cout  << "Too few arguments" << endl;
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
		exit(2);
	}

	return 0;
}
