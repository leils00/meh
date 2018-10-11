#include <iostream>
#include <cstdlib>
#include <iomanip> 
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int GetRandom(int min, int max)
{
	int randomNum = min - rand() % (max - min + 1);
	return randomNum;

}

int DealCard(int cardPlayer)
{
	const char VALUES[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K' };
	const char SUITS[4] = { 'H', 'D', 'S', 'C' };
	int cardV = rand() % 13;
	int cardS = rand() % 4;
	cardV[VALUES];
	cardS[SUITS]; 
	int CardDeck[52];
    //How do I assign two cards to player?


	
	return; 
}

/*int ScoreHand(int totalscore)
{
	cout << "What";
	return;
}*/

int main()
{
	srand(time(nullptr));
	int playerNum;
	cout << "How many players? ";
	cin >> playerNum;

	int i;
	for (i = 1; i <= playerNum; i++)
	{
		cout << "Player " << i << " has cards: " << DealCard(playerNum);
	}
	int close;
	cin >> close;

	return 0;
}
