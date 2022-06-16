/*
 * CSC450_CT3_1.cpp
 *
 *  Created on: May 14, 2020
 *      Author: 303 Composites
 *
 */
// C++ program to illustrate dynamic allocation
// and deallocation of memory using new and delete
#include <iostream>
using namespace std;

int main ()
{
	// Pointer initialization
	int *p = new int;
	int *q = new int;
	int *r = new int;

	// Request memory for the variable with 'new'
	p = new(nothrow) int;
	if (!p)
		cout << "allocation of memory failed\n";
	else
	{
		// Store value at allocated address
		cout << "Enter a value for P" << endl;
		cin>>*p;
		cout << "The Value of P = " << *p << endl;
	}
	//repeating above for q
	q = new(nothrow) int;
	if (!q)
		cout << "allocation of memory failed\n";
	else
	{
		// Store value at allocated address
		cout << "Enter a value for Q" << endl;
		cin>>*q;
		cout << "The Value of Q = " << *q << endl;
	}
	//repeating above for r
	r = new(nothrow) int;
	if (!r)
		cout << "allocation of memory failed\n";
	else
	{
		// Store value at allocated address
		cout << "Enter a value for R" << endl;
		cin>>*r;
		cout << "The Value of R = " << *r << endl;
	}


	// Delete the allocated memory
	delete p;
	delete r;
	delete q;

	// freed the block of allocated memory
	cout << "\n\nValue of p: " << p << endl;
	cout << "Value of q: " << q << endl;
	cout << "Value of r: " << r << endl;

	return 0;
}



