#include <iostream>
using namespace std;


    void getOrder(int&);
    void getOrder2(int);

int main(){
    /*pass by reference
    double amount = 78;
    double* dptr;
    dptr = &amount;

    int a;
    int* aptr;
    aptr=&a;


    cout << sizeof(amount) << ": size of double, amount." << endl;
    cout << sizeof(dptr) << ": size of double, dptr." << endl;
    cout << dptr << ": dptr." << endl;
    cout << sizeof(a) << ": size of int, a." << endl;
    cout << sizeof(aptr) << ": size of int*, aptr." << endl;

    cout << "The 'amount' is: " << amount << endl;
    cout << "The 'amount' is: " << *dptr << endl;

    *dptr = 90;
    cout << "Let's dereference the dptr and change the value in the address of 'amount': " << amount << endl;

    
    int numDough;
    getOrder(numDough);
    cout << "numDough is " << numDough << endl;
    cout << "&numDough is " << &numDough << endl;

    //pass by value
    int numDough2;
    getOrder2(numDough2);
    cout << "numDough2 is " << numDough2 << endl;
    cout << "&numDough2 is " << &numDough2 << endl;
    */

    //relationship between pinters and arrays
    const int SIZE = 5;
    int numbers[SIZE] = {1,2,3,4,5};
    cout << "array numbers is " << numbers << endl;
    cout << "numbers[0] is address: " << &numbers[0] << endl;
    cout << "numbers[1] is address: " << &numbers[1] << endl;

    // pointer arithmetic
    cout << "*(numbers + 2) is: " << *(numbers+2) << endl;
    cout << "(*numbers + 4) is: " << (*numbers+4) << endl;
    cout << "(numbers + 2) is: " << (numbers+2) << endl;

    //
    int *ptr = nullptr; // good practice -> don't accidentally put a random number in your variable
    cout << ptr;

    // create an array but don't know how many spaces we need in it
    cout << "how many numbers do you want to store? ";
    int size;
    cin >> size;
    int amounts[size]; // this is a bad practice. the array size needs to be a constant;

    //dynamic memory location -- heap
    int* mptr;
    mptr = new int[size]; //legal, allocate memory
    delete [] mptr; // deallocate


}

void getOrder(int &numDoughnuts){
    cout << "How many doughnuts? ";
    cin >> numDoughnuts;
}
void getOrder2(int numDoughnuts){
    cout << "How many doughnuts? ";
    cin >> numDoughnuts;
}