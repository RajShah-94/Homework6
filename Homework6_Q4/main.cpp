/*
 * main.cpp
 *
 *  Created on: 7 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

std::string reverse(const std::string & input){
	string result;
	string space(" ");
	int n;
	for (int i =1; i<=n; i++){
		n = result.size();
		result.resize(n+i, input[n-i]);
		result+= space;
	}
	return result;
}

int main() {
	cout << reverse("Hello World");
}
