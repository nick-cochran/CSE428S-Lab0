//
// Created by Nick Cochran on 9/7/24.
//
#include "Suit.h"


ostream& operator<<(ostream &ost, const Suit &suit) {
    switch (suit) {
        case Suit::clubs:
            ost << "C";
            return ost;
        case Suit::diamonds:
            ost << "D";
            return ost;
        case Suit::hearts:
            ost << "H";
            return ost;
        case Suit::spades:
            ost << "S";
            return ost;
        default:
            ost << "?";
            return ost;
    }
}

Suit& operator++(Suit& suit) {
    switch (suit) {
        case Suit::clubs:
            suit = Suit::diamonds;
            return suit;
        case Suit::diamonds:
            suit = Suit::hearts;
            return suit;
        case Suit::hearts:
            suit = Suit::spades;
            return suit;
        case Suit::spades:
            suit = Suit::undefined;
            return suit;
        default:
            suit = Suit::undefined;
            return suit;
    }
}