#ifndef DECK2_H_INCLUDED
#define DECK2_H_INCLUDED
#include "Card2.h"
#include<vector>
#include <iostream>
#include <string>
using namespace std;

class Deck{
public:
    int deckSize();
    void newDeck();
    Card dealCard();
private:
    vector<Card> mydeck;
};


#endif // DECK2_H_INCLUDED
