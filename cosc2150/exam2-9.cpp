#include <iostream>
using namespace std;

int *nums();
const int MAX = 4;

int main(){
	int *myNums;
	myNums =  nums();

	for (int i = 0; i< MAX; i++)
		cout << myNums[i] << endl;

	delete[] myNums;
}

int *nums(){
	int *numPtr = new int[MAX];
	for (int i = 0; i < MAX; i++){
		numPtr[i] = i;
	}

	return numPtr;
}
