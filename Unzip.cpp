#include "Unzip.h"
#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

void unzip() {
	map<int, string> m;
	string w = "Anan 0 200 300";
	int pos, th;

	pos = w.find(" ");
	string w2 = w.substr(0, pos);
	w = w.substr(pos + 1);

	while ((pos = w.find(" ")) > -1) {
		string thesi = w.substr(0, pos);
		istringstream(thesi) >> th;
		w = w.substr(pos + 1);
		cout << "thesi=" << thesi << endl;
		m[th] = w2;
	}
	cout << "thesi=" << w << endl;
	istringstream(w) >> th;
	m[th] = w2;

	map<int, string>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << ": " << (*it).second << endl;
	}


	//	 // string -> integer
	//        std::istringstream ( str ) >> i;
	//
	//        // string -> float
	//        std::istringstream ( str ) >> f;
	//
	//        // string -> double 
	//        std::istringstream ( str ) >> d;

}
