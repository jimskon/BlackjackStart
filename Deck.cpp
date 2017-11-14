// Implementation of Deck class
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Deck.h"

// Private functions needed for shuffling
void seedRandom() {
    srand(time(NULL));
}

double nextRandom() {
    double random = ((double) rand()) / RAND_MAX;
    return random;
}

Deck::Deck() {
    seedRandom(); //seed the random number generator
    Populate();
}

void Deck::Clear() {
    //clear vector
    m_Cards.clear();
}

void Deck::Populate() {
    Clear(); // clear out the deck before you create a new one

    //create deck by getting a copy of each card in the pool and placing it in the deck
    for (int s = CLUBS; s <= SPADES; ++s) {
        for (int r = ACE; r <= KING; ++r) {
            card_pool.push_back(Card(static_cast<cRank> (r), static_cast<suit> (s)));
            m_Cards.push_back(card_pool.back());
        }
    }
}

void Deck::Shuffle() {
    // This needs to randomize the cards in the deck
    // you will need to use the random function to do this
}

Card Deck::Deal() {
    // Pulls the top card out of the deck
    // and gives it to the caller
    // Make a special zero valued card in case we have nothing left
    Card aCard(BLANK,CLUBS);
    if (!m_Cards.empty()) {
        aCard = m_Cards.back();
        m_Cards.pop_back();
    } else {
        cout << "Out of cards, Unable to deal.\n";
    }
    return aCard;
}

string Deck::GetCardList() {
    string list = "";
    for (int i = 0; i < m_Cards.size(); i++) {
        list += m_Cards[i].CardName() + " ";
    }
    return list;

}
