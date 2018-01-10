#pragma once
#include <iostream>
#include "MatchCard.h"

class LinkedList{
private:
	class Node {
	public:
		Node(MatchCard val, Node *nx = NULL) :value(val), next(nx) {}
		MatchCard value;
		Node *next;
	};
	Node *m_head;
	Node *m_tail;
	unsigned int m_size;

public:

	LinkedList();
	~LinkedList();
	unsigned int size() const;
	bool isEmpty() const;
	//void addHead(Item);
	MatchCard removeHead();
	MatchCard retrieveHead() const;
	void addTail(MatchCard);
};