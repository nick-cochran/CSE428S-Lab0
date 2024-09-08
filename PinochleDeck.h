/*
 * PinochleDeck.h
 *
 * Nick Cochran
 * email: c.nick@wustl.edu
 *
 * This header file contains declarations for the PinochleDeck class which inherits the Deck class.  This
 *   contains important operators and in the class: a cards vector, a constructor, and a print function.
 *
 */

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
    void print(ostream& ost) override;
};

ostream& operator<<(ostream& ost, const PinochleRank& pRank);
PinochleRank& operator++(PinochleRank& pRank);

#endif //LAB0_PINOCHLEDECK_H
