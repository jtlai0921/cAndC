//============================================================================
// Name        : forNest2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//利用2層迴圈列印九九乘法表
	for(int i=1; i<=9 ;i++){
		for(int j=1; j<=9; j++){
			cout << i << "*" << j << "=" << i*j << "\t";
		}
		cout << "\n\n";
	}
	return 0;
}