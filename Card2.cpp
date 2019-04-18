#include <iostream>
#include <string>
#include "Card2.h"

using namespace std;
Card::Card() {
    name = "No Name";
    suit = "No Suit";
    value = 0;
}
Card::Card(string cardName, string cardSuit, int cardValue){
    name = cardName;
    suit = cardSuit;
    value = cardValue;
}
void Card::setName(string cardName){
    name = cardName;
}
void Card::setSuit(string cardSuit){
    suit = cardSuit;
}
void Card::setValue(int cardValue){
    value = cardValue;
}
string Card::getName(){
    cout << "What is the name of the card?" << endl;
    getline(cin, name);
    return name;
}
int Card::getValue(){
    cout << "What is the value of the card" << endl;
    cin >> value;
    return value;
}
void Card::printCard(){
    cout << value << " of " << suit << endl;
}
