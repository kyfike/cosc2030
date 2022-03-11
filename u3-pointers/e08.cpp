/******
 * Ky Fike on Mar 11, 2022
 * Exercise 8.8-10:
 * Write statements to perform the specified task.
 * Assume: unsigned int are stored in four bytes. Starting address of the built-in array is at location 1002500 in memory.
 * *****/

/* 8.8
A.  unsigned int values[size] = {2, 4, 6, 8, 10};

B.  unsigned int* vPtr;

C.  for (int i = 0; i < size; i++){
        cout << values[i] << endl;
    }

D.  vPtr = &values[0];
    or
    vPtr = (values);

E.  for (int i = 0; i < size; i++){
        cout << *(vPtr + i) << endl;
    }

F.  for (int i = 0; i < size; i++){
        cout << *(values + i)<< endl;
    }

G.  for (int i = 0; i < size; i++){
        cout << vPtr[i] << endl;
    }

H.  values[4];      a.s. notation w/ array name
    *(values + 4);  p/o notation w/ array name
    vPtr[4];        a.s. notation
    *(vPtr + 4);    p/o notation

I.  1002500 + (4 bytes * 3rd-in-array) = memory location
    starting + (space per uns int *  off-set from start)
    = 1002512
    The value at that location is 8.

J.  The address referenced by vPtr -= 4 would be:   1002500.
    The value at that location:                     2.
**************/

/* 8.9
A.    long* longPtr;
B.    longPtr = &value1;
C.    cout << *(longPtr) << endl;
D.    longPtr = &value2;
E.    cout << *(longPtr) << endl;
F.    cout << &value1 << endl;
G.    cout << longPtr << endl; //The addresses displayed aren't the same because value1 and value2 aren't stored at the same address.
**************/

/* 8.10
A.  

B.  

C.  

D.  

**************/