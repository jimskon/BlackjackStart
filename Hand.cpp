// Implementation of Hand class
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Hand.h"

Hand::Hand() {
    cards.reserve(7);
}

void Hand::Add(Card& card) {
    // add a card to hand
    cards.push_back(card);
}

bool Hand::Wins() {
    // Need to write, currently always busted.
    // Return true if this hand wins (21)
    return false ; //return false for testing
}

void Hand::Clear() {
    //clear vector of cards
    cards.clear();
}

string Hand::GetCardList() {
    string list = "";
    for (int i = 0; i < cards.size(); i++) {
        list += cards[i].CardName() + " ";
    }
    return list;

}

int Hand::GetTotal() {
    // Compute the total sum of the cards in hand
    // needs to be smart, the ACE is 11 or 1, whichever gets you closer to 21 without going over.
    int total = 0; // just return 0 for testing
    return total;
}

bool Hand::isBusted() {
    // Need to write, currently always busted.
    // Return true if this hand is busted, otherwise return false
    return false;
}