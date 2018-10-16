#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

//declare functions
int GetRandom(int min = 0, int max = 52);
string DealCard(string cardPlayer);
int ScoreHand(int totalscore);

int main()
{
	srand(time(0));
	int playerNum;
	cout << "How many players? ";
	cin >> playerNum;

	string PlayerCard;
	int i;
	for (i = 1; i <= playerNum; i++)
	{
		cout << "Player " << i << " has cards: " << DealCard(PlayerCard) << " " << DealCard(PlayerCard);
		cout << setw(20) << "" << left << "(" << ScoreHand(0) << ")" << endl;
	}
	
	int close;
	cin >> close;

	return 0;
}

//random number for what??? // please check the restrictions, if we use an array of 52 element to store those cards, then the random number will be index of array
// The GetRandom funtion should return an integer
void GetRandom(int min, int max)

int GetRandom(int min, int max)
{
	for (int h = 0; h < 52; h++)
	{
		int hand = rand() % (max - h + 1);
		return hand;
	}
}

//deal cards to players // better to use an array of 52 elements to store cards
string DealCard(string cardPlayer)
{
	//pairing values and suits
	string cardFace;
	string VALUES[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	char SUITS[4] = { 'H', 'D', 'S', 'C' };
	int cardV = rand() % 13;
	int cardS = rand() % 4;
	cardFace += cardV[VALUES];
	cardFace += cardS[SUITS];
	string cardDeck[52];
	//how do I assign them to players and make sure there is not repetition???
	return cardFace;
	for (int c = 0; c < 52; c++)
	{
		if (GetRandom() <= 13)
		{
			return cardDeck[c];
		}

		if (GetRandom() >= 14 && GetRandom() <= 26)
		{
			return cardDeck[c];
		}

		if (GetRandom() >= 27 && GetRandom() <= 39)
		{
			return cardDeck[c];
		}

		if (GetRandom() >= 40 && GetRandom() <= 52)
		{
			return cardDeck[c];
		}
	}
} 

//total scores
int ScoreHand(int totalscore)
{
	int val = 0;
	switch (val)
	{
	case 'A':
		totalscore += 1;
		break;
	case'2':
		totalscore += 2;
		break;
	}
	return totalscore;
}
