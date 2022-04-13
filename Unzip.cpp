#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include "Unzip.h"

using namespace std;

void unzip() {
	ofstream outFile("results.txt");
	map<int, string> m;
	string w = "Anan 0 200 300";
	int pos, th;

	pos = w.find(" ");
	string w2 = w.substr(0, pos);
	w = w.substr(pos + 1);

	while ((pos = w.find(" ")) > -1) {
		string thesi = w.substr(0, pos);
		th = stoi(thesi);
		w = w.substr(pos + 1);
		cout << "thesi=" << thesi << endl;
		m[th] = w2;
	}
	cout << "thesi=" << w << endl;

	th = stoi(w);
	m[th] = w2;

	map<int, string>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << ": " << (*it).second << endl;
	}
	outFile.close();
}
