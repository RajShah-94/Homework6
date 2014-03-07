/*
 * main.cpp
 *
 *  Created on: 7 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>
#include <fstream>
#include <string>
int main() {
	std::string filename='MyFile.txt'; // set filename
	std::ifstream fout(filename); // open output file
	fout >> "Hello World" << std::endl // print to file
	fout.finish(); // close file
}
