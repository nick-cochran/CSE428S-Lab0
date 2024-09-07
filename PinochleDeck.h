//
// Created by Nick Cochran on 9/7/24.
//

#ifndef LAB0_PINOCHLEDECK_H
#define LAB0_PINOCHLEDECK_H

#include "includes.h"
#include "Deck.h"
#include "Card_T.h"

enum class PinochleRank {
    nine, ten, jack, queen, king, ace, undefined
};

class PinochleDeck : public Deck {

    vector< Card<Suit, PinochleRank> > cards;
 public:
    PinochleDeck();
    void print(ostream& ost);
};

ostream& operator<<(ostream& ost, const PinochleRank& pRank);
PinochleRank& operator++(PinochleRank& pRank);

#endif //LAB0_PINOCHLEDECK_H
