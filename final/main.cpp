/*  Ky Fike
*   May 4, 2022
*/
#include "Card.h"
#include "Deck.h"
#include <iostream>

int main(){
    Card *obj = new Card(Card::Ace, Card::Spades);
    std::cout << obj->toString() << std::endl;

    Card *obj2 = new Card(Card::FaceValue(0), Card::Suit(0));
    //std::cout << Card::FaceValue(0);
    std::cout << obj2->toString() << std::endl;
    return 0;
}