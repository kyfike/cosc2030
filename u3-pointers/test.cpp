#include <iostream>
using namespace std;

void zero(long , int );
void mystery1(char*, const char*);

int main(){
    //8.12
    char blank = 32;
    cout << "bla" << blank << "nk\n\n";
    //8.13
    char string1[80], string2[80];
    cout << "enter 2 strings: ";
    cin >> string1 >> string2;
    mystery1(string1, string2);
    cout << string1 << endl;


    //8.8
    const int size = 5;
    unsigned int values[size] = {2, 4, 6, 8, 10};
    cout << values[3] << endl;

    unsigned int* vPtr;

    for (int i = 0; i < size; i++){
        cout << values[i] << endl;
    }

    //vPtr = &values[0];
    vPtr = (values);
    cout << vPtr;

    cout << endl << endl;

    for (int i = 0; i < size; i++){
        cout << *(vPtr + i) << endl;
    }

    for (int i = 0; i < size; i++){
        cout << *(values + i)<< endl;
    }

    for (int i = 0; i < size; i++){
        cout << vPtr[i] << endl;
    }

    cout << values[4] << " ";
    cout << *(values + 4) << " ";
    cout << vPtr[4] << " ";
    cout << *(vPtr + 4) << " " << endl;

    vPtr = &values[4];
    cout << endl << vPtr << "  ";
    vPtr -= 4;
    cout << &vPtr << endl;


    //8.9
    long value1 = 20000, value2;
    long* longPtr;
    longPtr = &value1;
    cout << endl << *(longPtr);
    longPtr = &value2;
    cout << endl << *(longPtr) << endl;
    cout << &value1 << endl;
    cout << longPtr << endl; //They aren't the same.

    //8.10
    //8.11

    double* realPtr;
    long* intPtr;
    //intPtr = realPtr;

    int* x, *y;
    x = y;

    char s[] = "this is a character array";
    //for (int i = 0; *s != '\0'; i++) {cout << *(s+i) << ' ';}

    short* numPtrs, results;
    short* genericPtr = numPtrs;
    //results = *numPtrs + 7;
    //results = *numPtrs + 7;

    cout << endl << endl;
    double xx = 19.78;
    double *xxPtr = &xx;
    cout << xxPtr << endl;
    return 0;
}

void zero(long bigIntegers, int arraySize){
    
}

void mystery1(char* s1, const char* s2){
    while (*s1 != '\0'){
        ++s1;
    }

    for (; (*s1 = *s2); ++s1, ++s2) {
        ;
    }
}