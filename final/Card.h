/*  Ky Fike
*   May 4, 2022
*/
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <type_traits>

class Card {
    public:
        enum FaceValue {
            Ace,  Deuce, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
        enum Suit {
            Hearts, Diamonds, Spades, Clubs };

        Card(FaceValue f, Suit s) {
            this->cardSuit = s;
            this->cardFace = f;
        }
        
        Card();
        ~Card();

        void setSuit(Suit s) {
            this->cardSuit = s;
        }

        void setFaceValue(FaceValue f) {
            this->cardFace = f;
        }

        Suit getSuit() {
            return cardSuit;
        }

        FaceValue getFaceValue() {
            return cardFace;
        }

        const std::string toString() const {
            std::ostringstream buffer;
            buffer << std::fixed
            << faceArr[cardFace] << " of "
            << suits[cardSuit] << std::endl;
            return buffer.str();
        }

    private:
        Suit cardSuit;
        FaceValue cardFace;
        std::string faceArr[13] = { "Ace",  "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
        std::string suits[4] = { "Hearts", "Diamonds", "Spades", "Clubs" };
};

#endif