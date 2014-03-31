/*
* main.cpp
*
* Created on: 7 Mar 2014
* Author: Raj Shah 120695027
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

std::string reverse(const std::string & input){
	string result;
	int n = input.size();
	for (int i=0; i<n;i++){
		result[i] = input[n-i-1];
	}
	return result;
}

int main() {
	const string result= "Hello World";
	cout << reverse(result);
}
