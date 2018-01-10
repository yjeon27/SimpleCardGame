#pragma once
#include <iostream>
#include "LinkedList.h"
#include "Bag.h"
using namespace std;
//#include <queue>
////	Deck Pile
//class Queue {
//private:
//	queue<MatchCard> deck;
//	MatchCard *mixed;
//	int maxRank;
//public:
//	Queue(int);
//};
//Queue::Queue(int maxRank) {
//	cout << "Queue constructor has been called.\n\n";
//	Bag obj(maxRank);
//	//maxRank = static_cast<int>(obj.returnSize());
//	//maxRank = obj.returnSize();
//	mixed = obj.returnDeck();
//	for (int i(0); i < maxRank * 4; i++) {
//		deck.push(mixed[i]);
//	}
//	cout << "PRINTING DECK PILE stored in Queue\n";
//	cout << "___________________________________\n\n";
//	for (int i(0); i < maxRank * 4; i++) {
//		cout << "Stack " << i + 1 << ": " << deck.front() << endl;
//		deck.pop();
//	}
//}

class Queue {
private:
	int maxRank;
	LinkedList deck;
public:
	Queue() {}
	Queue(int);
	~Queue() {}
	bool isEmpty() const;
	//bool isFull() const;
	void enqueue(MatchCard);
	MatchCard dequeue();
	MatchCard peek() const;
};

Queue::Queue(int maxRank) {
	this->maxRank = maxRank;
	cout << "Queue constructor has been called.\n\n";
	Bag obj(maxRank);
	
	for (int i(0); i < maxRank * 4; i++) {
		deck.addTail(obj.shuffle(i));
	}

	cout << "Deck pile from Queue.h has been created.\n\n";
}

bool Queue::isEmpty() const {
	return deck.isEmpty();
}

//template <class Item>
//bool Queue<Item>::isFull() const {
//
//}

void Queue::enqueue(MatchCard k) {
	deck.addTail(k);
}

MatchCard Queue::dequeue() {
	return deck.removeHead();
}

MatchCard Queue::peek() const {
	return deck.retrieveHead();
}