#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

//declare functions
int GetRandom(int min, int max);
string DealCard(int cardDeck[], int player);
int ScoreHand(const int cardDeck[], int player);
int ScoreDealer(const int cardDeck[], int dealer);

//main function
int main() {
	srand(time(0)); //seed 
	int playerNum = 2;
	string dealer;
	string youPlayer;
	int cardDeck[52] = { 0 };
	string decision;

	//call two cards and total scores 
	string PlayerCard;
	int i;
	for (i = 1; i <= playerNum; i++) {
		cout << "Dealer " << " has cards: ";
		cout << left << DealCard(cardDeck, i) << " " << setw(20) << DealCard(cardDeck, i);
		cout << "(" << ScoreHand(cardDeck, i) << ")" << endl;
		cout << "You have cards: ";
		cout << left << DealCard(cardDeck, i) << " " << setw(20) << DealCard(cardDeck, i);
		cout << "(" << ScoreHand(cardDeck, i) << ")" << endl;
		
	}

	//visual studio only
	int close;
	cin >> close;

	return 0;
}

//get a random value between min and max
int GetRandom(int min, int max) {
	int random = min + rand() % (max - min + 1);
	return random;
}


//deal cards to players
string DealCard(int cardDeck[], int player) {
	//pairing values and suits
	string cardFace;
	string VALUES[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	char SUITS[4] = { 'H', 'D', 'S', 'C' };
	//call random value for card value and suit from GetRandom() 
	int randomValue = GetRandom(0, 12);
	int randomSuit = GetRandom(0, 3);
	int cardsIndex = (randomSuit * 13) + randomValue;

	//checking undealt cards
	while (cardDeck[cardsIndex] != 0) {
		randomValue = GetRandom(0, 12);
		randomSuit = GetRandom(0, 3);
		cardsIndex = (randomSuit * 13) + randomValue;
	}

	//assign card index from array to player
	cardDeck[cardsIndex] = player;

	//values and suits added to card
	cardFace += VALUES[randomValue];
	cardFace += SUITS[randomSuit];

	return cardFace;
}

//total scores
int ScoreHand(const int cardDeck[], int player) {
	int total = 0;

	for (int j = 0; j < 52; j++) {
		if (cardDeck[j] == player) {
			//Ace = 0 % 13 + 1; Jack = 10 % 13 + 1, etc.
			int score = (j % 13) + 1;

			//any score greater than 10 is equal to 10
			//for Jack, Queen, King
			if (score > 10) {
				score = 10;
			}

			total += score;
		}
	}

	return total;
}

/*int ScoreDealer(const int cardDeck[], int dealer){
	int dealerHand = ScoreHand();

}*/
