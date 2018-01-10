#pragma once
#include <iostream>
#include <string>
using namespace std;

class MatchCard {

private:
	string suit;
	int rank;

public:
	MatchCard() {}
	MatchCard(int, string);

	friend ostream& operator<< (std::ostream& os, const MatchCard& mc);

};

//	set each card's suit type and rank number
MatchCard::MatchCard(int rank, string suit) {
	this->rank = rank;
	this->suit = suit;
}

//	prints each card's traits (suit type & rank number) using << operator
ostream & operator<<(ostream & os, const MatchCard & mc) {
	cout << mc.suit << " " << mc.rank;
	return os;
}