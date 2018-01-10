#include <iostream>
#include "Player.h"
#include "MatchGame.h"
#include "Bag.h"
#include <ctime>
using namespace std;

int main() {
	int playerNum, maxRank;

	Player numPlayers;

	cout << "**************************************************************************************\n";
	cout << "* Welcome to a game of UNO without having to call out UNO when theres UNO card left! *\n";
	cout << "**************************************************************************************\n\n";

	cout << "Enter number of players: ";
	cin >> playerNum;
	cout << "Enter the maximum rank: ";
	cin >> maxRank;
	cout << endl;

	while (maxRank > 10 || maxRank < 1) {
		cout << "Please enter a maximum rank between 1 and 10: ";
		cin >> maxRank;
	}
	if (maxRank > 0 && maxRank < 11) {
		cout << endl << endl;
	}

	cout << "_______________________________________________________\n";
	cout << "		Number of Players: " << playerNum << endl << "		Maximum Card Rank: " << maxRank << endl;
	cout << "_______________________________________________________\n\n";


	//Bag bag(maxRank);
	Queue queue(maxRank);
	//MatchGame game(playerNum, maxRank);


}


//	An array of cards will be created consisting of ALL (4*maxRank) the cards of the deck
