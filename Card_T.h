//
// Created by Nick Cochran on 9/7/24.
//
/*
 * part 8.
 */

#ifndef LAB0_CARD_T_H
#define LAB0_CARD_T_H

#include "includes.h"

#include "Suit.h"

//enum class Rank {
// one, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace
//};

template<typename S, typename R> struct Card;

template<typename S, typename R>
    ostream& operator<<(ostream& ost, const Card<S, R>& card);


#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE

#include "Card_T.cpp"

#endif // TEMPLATE_HEADERS_INCLUDE_SOURCE

#endif //LAB0_CARD_T_H
