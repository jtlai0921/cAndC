//============================================================================
// Name        : bubble.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n = 4;
	float array[]={3, 2, 1, 4} , tem;
	for(int i=0; i<n-1; i++){
		cout << array[i];
		for(int j=i+1;j<n;j++){
			if (array[i] > array[j]){
				tem = array[i];
				array[i] = array[j];
				array[j] = tem;
			}
		}
	}

	cout << "\n 由小到大排序後:\n";
	for(int i=0; i<n; i++){
		cout << array[i] << " ";
	}
	cout << "\n";

	return 0;
}
