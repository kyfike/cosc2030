/******
 * Ky Fike on Mar 11, 2022
 * Exercise 8.12:
 * Simulation of the Tortoise and the Hare
 * *****/

#include <cstdlib>
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void hare(int*);
void tortoise(int*);

int main(){
    int startHare = 1, startTort = 1;

    for(;;){
        this_thread::sleep_for(chrono::seconds(1));
        hare(&startHare);
        tortoise(&startTort);
    }
    
    return 0;
}

void hare(int* hptr){
    cout << "one hare";
}
void tortoise(int* tPtr){
    cout << "t" << endl;
}