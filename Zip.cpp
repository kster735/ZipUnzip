#include "Zip.h"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <vector>

using namespace std;

void zip() {
	ifstream fromFile("input.txt");
	ofstream toFile("results.txt");

	string w;
	map<string, vector<int> > m;
	map<string, vector<int> >::iterator mit;
	int pos;

	pos = 0;
	while (fromFile >> w) {
		
		mit = m.find(w);  // � find �� ���������� ��� ���� ��� �������� �� ������ �� w. �� ��� ������� ���������� ��� ������� ���������� �������� zip.end()
		if (mit == m.end()) {  // ��� ������� ��� Map ������� �� ������ ��� ���� w.
			vector<int> temp;
			temp.push_back(pos);
			m[w] = temp;
		}
		else {					  
			vector<int> temp = m[w];  
			temp.push_back(pos);
			m[w] = temp;
		}
		pos++;
	}
	// for print to monitor
	for (mit = m.begin(); mit != m.end(); mit++) {
		cout << (*mit).first << ": {";
		vector<int> temp = (*mit).second;
		for (int i = 0; i < temp.size(); i++) {
			cout << temp[i] << ",";
		}
		cout << "}" << endl;
	}

	// for write to file
	for (mit = m.begin(); mit != m.end(); mit++) {
		toFile << (*mit).first << " ";
		vector<int> temp = (*mit).second;
		for (int i = 0; i < temp.size(); i++) {
			toFile << temp[i] << " ";
		}
		toFile << endl;
	}


}
