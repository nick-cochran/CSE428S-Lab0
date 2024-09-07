//
// Created by Nick Cochran on 9/7/24.
//

#ifndef LAB0_HOLDEMDECK_H
#define LAB0_HOLDEMDECK_H

#include "includes.h"
#include "Deck.h"
#include "Card_T.h"

enum class HoldEmRank {
    two, three, four, five, six, seven, eight, nine, ten,
        jack, queen, king, ace, undefined
};

class HoldEmDeck : public Deck {

    vector< Card<Suit, HoldEmRank> > cards;
 public:
    HoldEmDeck();
    void print(ostream& ost);
};

ostream& operator<<(ostream& ost, const HoldEmRank& heRank);
HoldEmRank& operator++(HoldEmRank& heRank);

#endif //LAB0_HOLDEMDECK_H
