// A class for a deck of playing card

using namespace std;

const int DECKSIZE = 52;

#ifndef DECK_H
#define DECK_H


class Deck {
public:
    Deck();

    //clears deck of all cards
    void Clear();

    //creates deck of 52 cards
    void Populate();

    //shuffles cards
    void Shuffle();

    //deals one card 
    Card Deal();

    // create a string list of all the cards in this deck.
    string GetCardList();

private:
    vector <Card> m_Cards;  // Used to store a list of current cards in Deck. 
    vector <Card> card_pool;  // Used to actually store the "real" cards..
                              // Never changes, these cards are used as a card source to build a Deck
};

#endif /* DECK_H */

