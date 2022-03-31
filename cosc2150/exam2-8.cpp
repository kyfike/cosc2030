#include <iostream>
using namespace std;

int *nums();
const int MAX = 4;

int main(){
	int *ptr = nums();

	return 0;
}

int *nums(){
	int *arrPtr = new int[MAX];
	return arrPtr;
}
