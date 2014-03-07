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
	std::string filename="MyFile.txt"; //' '
	std::ofstream /* ifstream */ fout(filename.c_str()); // (filename)
	fout << /* >> */ "Hello World" << std::endl;
	fout.close(); //finish
}
