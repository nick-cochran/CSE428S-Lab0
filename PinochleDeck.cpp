//
// Created by Nick Cochran on 9/7/24.
//

#include "PinochleDeck.h"


// pushes back cards into the cards vector for the PinochleDeck class
PinochleDeck::PinochleDeck() {
    for(Suit suit = Suit::clubs; suit != Suit::undefined; ++suit) {
        for(PinochleRank rank = PinochleRank::nine; rank != PinochleRank::undefined; ++rank) {
            cards.push_back(Card(suit, rank));
        }
    }
    // nested for loop used again instead of two push backs in the previous one
    //   because this results in a better ordering
    for(Suit suit = Suit::clubs; suit != Suit::undefined; ++suit) {
        for(PinochleRank rank = PinochleRank::nine; rank != PinochleRank::undefined; ++rank) {
            cards.push_back(Card(suit, rank));
        }
    }
}

// prints all of the cards in the deck
void PinochleDeck::print(std::ostream &ost) {
    Suit currSuit = firstSuit;
    for(Card card : cards) {
        if(card.suit != currSuit) {
            currSuit = card.suit;
            ost << '\n';
            if(currSuit == firstSuit) { // we have made it to the second deck
                ost << '\n'; // another line break between the two decks
            }
        }
        ost << card << " ";
    }
}

// overloads the << operator for the PinochleRank enum
ostream& operator<<(ostream& ost, const PinochleRank& pRank) {
    switch (pRank) {
        case PinochleRank::nine:
            ost << "9";
            return ost;
        case PinochleRank::ten:
            ost << "10";
            return ost;
        case PinochleRank::jack:
            ost << "J";
            return ost;
        case PinochleRank::queen:
            ost << "Q";
            return ost;
        case PinochleRank::king:
            ost << "K";
            return ost;
        case PinochleRank::ace:
            ost << "A";
            return ost;
        default:
            ost << "?";
            return ost;
    }
}

// overloads the ++ prefix operator for the PinochleRank enum
PinochleRank& operator++(PinochleRank& pRank) {
    switch (pRank) {
        case PinochleRank::nine:
            return (pRank = PinochleRank::ten);
        case PinochleRank::ten:
            return (pRank = PinochleRank::jack);
        case PinochleRank::jack:
            return (pRank = PinochleRank::queen);
        case PinochleRank::queen:
            return (pRank = PinochleRank::king);
        case PinochleRank::king:
            return (pRank = PinochleRank::ace);
        case PinochleRank::ace:
            return (pRank = PinochleRank::undefined);
        default:
            return (pRank = PinochleRank::undefined);
    }
}