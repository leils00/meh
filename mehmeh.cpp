#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
//trying new things so there are a lot of things that probably don't work
//declare functions
int GetRandom(int min = 0, int max = 52);
string DealCard();
//int ScoreHand();

int main(){
	srand(time(0));
	int playerNum;
	cout << "How many players? ";
	cin >> playerNum;

	string PlayerCard;
	int i;
	for (i = 1; i <= playerNum; i++){
		cout << "Player " << i << " has cards: " << DealCard() << " " << DealCard();
		cout << setw(20) << "" << left << "(" << /*ScoreHand() <<*/ ")" << endl;
	}
	
	//visual studio only
	int close;
	cin >> close;

	return 0;
}


string DeckOfCards() {
	string cardDeck[52];
	string cardFace;
	string VALUES[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	char SUITS[4] = { 'H', 'D', 'S', 'C' };
	int cardV = rand() % 13;
	int cardS = rand() % 4;
	cardFace += cardV[VALUES];
	cardFace += cardS[SUITS];
	return cardFace;
}

int GetRandom(int min, int max){
	
	int cardDeck[52];
	for (int d = 0; d < 52; d++) {
		cardDeck[d] = max - rand() % (max - min + 1);
		return cardDeck[d];
	}	   
}

/*void shuffleDeck(int cardDeck[52], int n) {
	for (int j = 0; j < n; j++) {
		int shuffle = j + (rand() % (52 - j));
		cardDeck[j] = cardDeck[n]; 
	}
}*/
//deal cards to players
string DealCard(){
	//pairing values and suits
	const int NumOfCards = 2;
	string cardFace = DeckOfCards();
	int cardDeck[52];
	for (int j = 0; j < 52; cardDeck[j++]) {
		cardDeck[j] = rand() % (52 - j) + j;
		return cardDeck[j];
	}
	
	
} 

//total scores
/*int ScoreHand() {
	int val = 0;
	DealCard();
	int totals = 0;
	for (int v = 0; v < 52; v++) {
		switch (cardDeck[v]) {
		case 'A':
			totals += 1;
			break;
		case '2':
			totals += 2;
			break;
		case'3':
			totals += 3;
			break;
		case '4':
			totals += 4;
			break;
		case '5':
			totals += 5;
			break;
		case '6':
			totals += 6;
			break;
		case '7':
			totals += 7;
			break;
		case '8':
			totals += 8;
			break;
		case '9':
			totals += 9;
			break;
		case '10':
		case'J':
		case 'Q':
		case'K':
			totals += 10;
			break;
		}
		return totals;

	}
}*/
