//
// Created by Nick Cochran on 9/7/24.
//

#include "Card_T.h"
#include "PinochleDeck.h"
#include "HoldEmDeck.h"


int main() {
    PinochleDeck pDeck;
    HoldEmDeck heDeck;

    pDeck.print(cout);
    heDeck.print(cout);

    return SUCCESS;
}