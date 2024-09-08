/*
 * Card_T.h
 *
 * Nick Cochran
 * email: c.nick@wustl.edu
 *
 * This header file contains declarations for the Card struct and a << operator for it.
 *
 */

#ifndef LAB0_CARD_T_H
#define LAB0_CARD_T_H

#include "includes.h"

#include "Suit.h"

template<typename S, typename R> struct Card;

template<typename S, typename R>
    ostream& operator<<(ostream& ost, const Card<S, R>& card);


#ifdef TEMPLATE_HEADERS_INCLUDE_SOURCE

#include "Card_T.cpp"

#endif // TEMPLATE_HEADERS_INCLUDE_SOURCE

#endif //LAB0_CARD_T_H
