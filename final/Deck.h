/*  Ky Fike
*   May 4, 2022
*/
#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <algorithm> // to count pairs in scoring each hand
#include <array>     // begin


class Deck {
    public:
        Deck() {
            fillDeck();
        }

        /*Card* getCardArray() {
            return cardArray[0];
        }*/
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
                    //std::cout << cardArray[count].toString();     // test-line: print the original, ordered populated deck (feel free to uncomment this line!)
                    count++;
                }
            }  
            currentCard = 0;
            cardArray[currentCard];   // point cardArray to it's beginning value
            //std::cout << cardArray->toString();   // test-line: confirm that the array is pointing to the start of the deck
        }
        ~Deck() {
            // empty
        };
        
        void shuffle() { // I can't seem to get this to go correctly: some of the cards are dupicates!
                        // This also messes up the deal-- it is incorrect if the shuffle is used. However,
                        // without the shuffle, the deal is correct.
            srand(static_cast<unsigned int> (time(0))); // for randomness
            for (int q = 0; q < 4; ++q) {   // number of suits (this condition must come first, since 4 < 13)
                for (int i = 0; i < 13; ++i) {  // number of face values
                    int swapPosition = (0 + rand() % 52);
                    cardArray[currentCard]; // a single pointer to the current card in the deck
                    Card storeA(cardArray[currentCard].getFaceValue(), cardArray[currentCard].getSuit()); 
                    Card storeB(cardArray[swapPosition].getFaceValue(), cardArray[swapPosition].getSuit());  
                    cardArray[currentCard].setFaceValue(storeB.getFaceValue());
                    cardArray[currentCard].setSuit(storeB.getSuit());  // since currentCard is safely stored, overwrite the values in currentCard with swapPosition
                    cardArray[currentCard].setFaceValue(storeB.getFaceValue());
                    cardArray[swapPosition].setFaceValue(storeA.getFaceValue());
                    cardArray[swapPosition].setSuit(storeA.getSuit()); // lastly, overwrite swapPosition with stored vales of currentCard
                    std::cout << cardArray[currentCard].toString();
                }
            }
            currentCard = 0;
            cardArray[currentCard];
        }


        void deal() {
            std::cout << "\nHand 1:\n";
            for (int currentCard = 0; currentCard < 10; currentCard++) {
                if (currentCard % 2 == 0) {
                    hand1[currentCard].setFaceValue(cardArray[currentCard].getFaceValue());
                    hand1[currentCard].setSuit(cardArray[currentCard].getSuit());
                    std::cout << cardArray[currentCard].toString();
                }
            }

            std::cout << "\nHand 2:\n";
            for (int currentCard = 0; currentCard < 10; currentCard++) {
                if (currentCard % 2 == 1) {
                    hand2[currentCard].setFaceValue(cardArray[currentCard].getFaceValue());
                    hand2[currentCard].setSuit(cardArray[currentCard].getSuit());
                    std::cout << cardArray[currentCard].toString();
                }
            }
            currentCard = 0;
        }

        Card *aHand = &hand1[0];
        Card *bHand = &hand2[0];
        int rateScore(Card *hand[]) {
            int score; // (1-6) 1 pair, 3 of a kind, 4 of a kind
            int c[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

            for (int i = 0; i < 5; i++){
                for (int q = 0; q < 13; q++) {
                    if(hand[i]->getFaceValue() == 0) c[q]++;
                    if(hand[i]->getFaceValue() == 1) c[q]++;
                    if(hand[i]->getFaceValue() == 2) c[q]++;
                    if(hand[i]->getFaceValue() == 3) c[q]++;
                    if(hand[i]->getFaceValue() == 4) c[q]++;
                    if(hand[i]->getFaceValue() == 5) c[q]++;
                    if(hand[i]->getFaceValue() == 6) c[q]++;
                    if(hand[i]->getFaceValue() == 7) c[q]++;
                    if(hand[i]->getFaceValue() == 8) c[q]++;
                    if(hand[i]->getFaceValue() == 9) c[q]++;
                    if(hand[i]->getFaceValue() == 10) c[q]++;
                    if(hand[i]->getFaceValue() == 11) c[q]++;
                    if(hand[i]->getFaceValue() == 12) c[q]++;
                }
            }
            for (int q = 0; q < 13; q++) {
                if (c[q] >= 4) { std::cout << "The hand contains a four of a kind."; score = 4; return score;}
                    else if (c[q] >=3) { std::cout << "The hand contains a three of a kind."; score = 3; return score;}
                    else if (c[q] >= 2) { std::cout << "The hand contains a pair."; score = 1; return score;}
            }
            return score;
        }

        void compareHands(int a, int b) {
            if (a > b) { std::cout << a << " is the better hand.";}
            else if (a < b) { std::cout << b << " is the better hand.";}
            else if (a == b) { std::cout << a << " and " << b << " are tied.";}

        }

    private:
        int currentCard = 0;
        int MAXCARDS = 52;
        Card oneCard;
        Card cardArray[52];
        Card hand1[5], hand2[5];

};
#endif