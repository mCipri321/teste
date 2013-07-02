//============================================================================
// Name        : test.cpp
// Author      : cipri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream f("test.in");
	string c;
	cout<<"Introdu date:";
	cin>>c;
	cout << c; // prints !!!Hello World!!!
	return 0;
}
