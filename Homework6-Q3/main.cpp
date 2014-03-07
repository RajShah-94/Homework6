/*
 * main.cpp
 *
 *  Created on: 7 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool output(const string & filename, float * array, int n) {
	ofstream fout(filename.c_str());
	if(fout.good()) {
		fout << "Testing" << endl;
		if(fout.fail()) {
			return false;
		}


	}
	for (int i=0; i<n; i++) {
		fout << array[i] << " " << endl;
		}
	fout.close();
	return true;
}

int main() {
	const string file = "Myfile.txt";
	float array1[] = {2,3,5,7,11,13,17,19,23,29};
	output(file, array1, 10);
}
