/*  Ky Fike
*   May 4, 2022
*/
#include "Card.h"
#include "DeckOfCards.h"
#include <iostream>

int main(){
    Card *obj = new Card(Card::Ace, Card::Spades);
    std::cout << obj->toString() << std::endl;
   // std::cout << k;
    return 0;
}