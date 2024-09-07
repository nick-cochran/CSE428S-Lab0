//
// Created by Nick Cochran on 9/7/24.
//

#include "Card_T.h"


template<typename S, typename R> struct Card {
    S suit;
    R rank;

    Card(S suit, R rank) {
        this->suit = suit;
        this->rank = rank;
    }
};

template<typename S, typename R>
    ostream& operator<<(ostream& ost, const Card<S, R>& card) {
    ost << card.suit;
    ost << card.rank;
    return ost;
}
