/*
 * main.cpp
 *
 *  Created on: 7 Mar 2014
 *      Author: Raj Shah 120695027
 */

#ifndef MYCLASS_HPP_
#define MYCLASS_HPP_

class MyClass {
	private:
		static float myVar;
	public:
		MyClass(){};
		~MyClass(){};
		static void setValue(float v);

};

#endif /* MYCLASS_HPP_ */
