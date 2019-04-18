#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Deck2.h"
#include "Card2.h"

using namespace std;

int Deck::deckSize(){
    int deckSize;
    deckSize = mydeck.size();
    return deckSize;
}

void Deck::newDeck(){
    mydeck.clear();
    mydeck.push_back(Card("Ace of clubs", "Clubs", 1));
    mydeck.push_back(Card("Two of clubs", "Clubs", 2));
    mydeck.push_back(Card("Three of clubs", "Clubs", 3));
    mydeck.push_back(Card("Four of clubs", "Clubs", 4));
    mydeck.push_back(Card("Five of clubs", "Clubs", 5));
    mydeck.push_back(Card("Six of clubs", "Clubs", 6));
    mydeck.push_back(Card("Seven of clubs", "Clubs", 7));
    mydeck.push_back(Card("Eight of clubs", "Clubs", 8));
    mydeck.push_back(Card("Nine of clubs", "Clubs", 9));
    mydeck.push_back(Card("Ten of clubs", "Clubs", 10));
    mydeck.push_back(Card("Jack of clubs", "Clubs", 10));
    mydeck.push_back(Card("Queen of clubs", "Clubs", 10));
    mydeck.push_back(Card("King of clubs", "Clubs", 10));
    mydeck.push_back(Card("Ace of Spades", "Spades", 1));
    mydeck.push_back(Card("Two of Spades", "Spades", 2));
    mydeck.push_back(Card("Three of Spades", "Spades", 3));
    mydeck.push_back(Card("Four of Spades", "Spades", 4));
    mydeck.push_back(Card("Five of Spades", "Spades", 5));
    mydeck.push_back(Card("Six of Spades", "Spades", 6));
    mydeck.push_back(Card("Seven of Spades", "Spades", 7));
    mydeck.push_back(Card("Eight of Spades", "Spades", 8));
    mydeck.push_back(Card("Nine of Spades", "Spades", 9));
    mydeck.push_back(Card("Ten of Spades", "Spades", 10));
    mydeck.push_back(Card("Jack of Spades", "Spades", 10));
    mydeck.push_back(Card("Queen of Spades", "Spades", 10));
    mydeck.push_back(Card("King of Spades", "Spades", 10));
    mydeck.push_back(Card("Ace of Diamonds", "Diamonds", 1));
    mydeck.push_back(Card("Two of Diamonds", "Diamonds", 2));
    mydeck.push_back(Card("Three of Diamonds", "Diamonds", 3));
    mydeck.push_back(Card("Four of Diamonds", "Diamonds", 4));
    mydeck.push_back(Card("Five of Diamonds", "Diamonds", 5));
    mydeck.push_back(Card("Six of Diamonds", "Diamonds", 6));
    mydeck.push_back(Card("Seven of Diamonds", "Diamonds", 7));
    mydeck.push_back(Card("Eight of Diamonds", "Diamonds", 8));
    mydeck.push_back(Card("Nine of Diamonds", "Diamonds", 9));
    mydeck.push_back(Card("Ten of Diamonds", "Diamonds", 10));
    mydeck.push_back(Card("Jack of Diamonds", "Diamonds", 10));
    mydeck.push_back(Card("Queen of Diamonds", "Diamonds", 10));
    mydeck.push_back(Card("King of Diamonds", "Diamonds", 10));
    mydeck.push_back(Card("Ace of Hearts", "Hearts", 1));
    mydeck.push_back(Card("Two of Hearts", "Hearts", 2));
    mydeck.push_back(Card("Three of Hearts", "Hearts", 3));
    mydeck.push_back(Card("Four of Hearts", "Hearts", 4));
    mydeck.push_back(Card("Five of Hearts", "Hearts", 5));
    mydeck.push_back(Card("Six of Hearts", "Hearts", 6));
    mydeck.push_back(Card("Seven of Hearts", "Hearts", 7));
    mydeck.push_back(Card("Eight of Hearts", "Hearts", 8));
    mydeck.push_back(Card("Nine of Hearts", "Hearts", 9));
    mydeck.push_back(Card("Ten of Hearts", "Hearts", 10));
    mydeck.push_back(Card("Jack of Hearts", "Hearts", 10));
    mydeck.push_back(Card("Queen of Hearts", "Hearts", 10));
    mydeck.push_back(Card("King of Hearts", "Hearts", 10));
}
Card Deck::dealCard(){
    int r;
    Card p1;
    r = (rand() % 51);
    p1 = mydeck.at(r);
    mydeck.erase(mydeck.begin()+r);
    return p1;
}

