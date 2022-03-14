/******
 * Ky Fike on Mar 11, 2022
 * Exercise 8.12:
 * Simulation of the Tortoise and the Hare
 * *****/

#include <cstdlib>
#include <iostream>
#include <thread> //for the clock
#include <chrono> //for the clock
using namespace std;

void moveHare(int*);
void moveTortoise(int*);

int main(){
    int const SIZE = 70;
    int pH = 0, pT = 0;
    srand(static_cast<unsigned int> (time(0))); //important for move type percentage in func. tick
    char race[SIZE] = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, //25
                       32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, //25
                       32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};                    //20

    cout << "BANG!!!\nAND THEY'RE OFF!!!!\n";
    //tick per second
    for(;;){
        this_thread::sleep_for(chrono::seconds(1));
        moveHare(&pH);
        moveTortoise(&pT);

        //ouch 
        if (pH == pT) {
            cout << "OUCH!!!\n";
        }

        //can't go outside of the array. spot 69 = win.
        if (pH >= SIZE-1) {pH = SIZE-1;}
        if (pT >= SIZE-1) {pT = SIZE-1;}


        race[pH] = 'H';
        race[pT] = 'T';
        for (int i = 0; i < SIZE; i++){
            cout << race[i];
        }
        cout << endl;
        //make the spot blank again and ready for next loop's assignement
        race[pH] = 32;
        race[pT] = 32;

        if (pH == SIZE-1 && pT == SIZE-1) {cout << "It's a tie.\n\n";}
        else if (pH == SIZE-1) {cout << "Hare wins. Yuck\n\n";}
        else if (pT == SIZE-1) {cout << "TORTOISE WINS!!! YAY!!!\n\n";}

        if (pH == SIZE-1 || pT == SIZE-1) {return 0;}
    }
return 0; //just in case something goes wrong...
}


void moveHare(int* aH){
    //move type percentage and actual move
    int moveH = 0;
    //hare
    moveH = (1 + rand() % 5);
    switch (moveH) {
        case 1:
        case 2:
            *aH += 0; //sleep, 20%
        break;
        case 3: 
        case 4: 
            *aH += 9; //big hop, 20%
        break;
        case 5:
            *aH -= 12; //big slip, 10%
        break;
        case 6:
        case 7: 
        case 8: 
            *aH += 1; //small hop, 30%
        break;
        case 9: 
        case 10:
            *aH -= 2; //small slip, 20%
        break;
    }
    
    if (*aH < 0) {*aH = 0;} //can't go negative in the race!
}


void moveTortoise(int* aT){
    int moveT = 0;
    moveT = (1 + rand() % 3);
    switch (moveT) {
        case 1: 
        case 2: 
        case 3: 
        case 4:
        case 5:
            *aT += 3; //fast plod, 50%
        break;
        case 6:
        case 7:
            *aT -= 6; //slip, 20%
        break;
        case 8:
        case 9:
        case 10:
            *aT += 1; //slow plod, 30%
        break;
    }

    if (*aT < 0) {*aT = 0;}

}