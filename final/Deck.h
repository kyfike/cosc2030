/*  Ky Fike
*   May 4, 2022
*/
#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {
    public:
        Deck() {
            Card *store = new Card[MAXCARDS];
            cardArray = store;
            fillDeck();
        }

        Card* getCardArray() {
            return cardArray;
        }
        /*Card GetCard(Card& card){

        };
        void addCard(Card& card);
        void shuffleCards();
        Card drawCards(int fromDeck);*/
        void fillDeck() {
            int count = 0;
            for (int q = 0; q < 4; ++q) {   // number of suits (this condition must come first, since 4 < 13)
                for (int i = 0; i < 13; ++i) {  // number of face values
                    cardArray[count].setSuit(Card::Suit(q));
                    cardArray[count].setFaceValue(Card::FaceValue(i));
                    std::cout << cardArray[count].toString() << std::endl;
                    count++;
                }
            }  
        }
        ~Deck() {
            // empty
        };

    private:
        int fromDeck = 0;
        int MAXCARDS = 52;
        Card oneCard;
        Card *cardArray = NULL;

};
#endif