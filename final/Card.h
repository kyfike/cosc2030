/*  Ky Fike
*   May 4, 2022
*/
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

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
/*
        friend std::ostream& operator << (std::ostream& output, const Card& obj) {
            output << obj.FaceValue << " of " << obj.Suit << endl;
            return output;
        }*/

        const std::string toString() const {
            std::ostringstream buffer;
            buffer << std::fixed
            << cardFace << cardSuit;
            return buffer.str();
        }

    private:
        Suit cardSuit;
        FaceValue cardFace;
        //static string faces[];
        //static string suits[];
};

#endif