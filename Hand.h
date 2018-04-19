// A class for a Hand of playing cards
using namespace std;

class Hand {
public:
    Hand();

    //adds a card to the hand
    void Add(Card& card);

    //clears hand of all cards
    void Clear();

    //gets total value of hand, intelligently treats aces as 1 or 11
    int GetTotal();

    // returns true of card sum is over 21
    bool isBusted();
    
    // return true if plyyer has exactly 21
    bool Wins();

    // returns a list of current cards hand.
    string GetCardList();

private:
    vector <Card> cards;
};
