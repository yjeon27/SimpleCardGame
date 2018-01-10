#pragma once
#include <iostream>
#include "Queue.h"

//	Hand of Each Player
class OrderedList {
private:
	class Node {
	public:
		Node(int val, Node *nx = NULL) :value(val), next(nx) {}
		int value;
		Node *next;
	};
	Node *m_head;
	Node *m_tail;
	unsigned int m_size;

public:
	OrderedList() {}
	~OrderedList() {}

	unsigned int getSize() const;
	bool isEmpty() const;
	void addHead(int);
	int removeHead();
	int retrieveHead() const;
	void addTail(int);
	int removeTail();
	int retrieveTail() const;
	void add(unsigned int, int);
	int replace(unsigned int, int);
	int remove(unsigned int);
	int retrieve(unsigned int) const;
};

unsigned int OrderedList::getSize() const{
	return m_size;
}

bool OrderedList::isEmpty()const {
	return (m_size == 0);
}

void OrderedList::addHead(int item) {
	m_head = new Node(item, m_head);
	if (m_tail == NULL) {
		m_tail = m_head;
	}
	m_size++;
}

int OrderedList::removeHead() {
	Node *oldNode = m_head;
	int returnVal = m_head->value;
	m_head = m_head->next;
	if (m_head == NULL) {
		m_tail = NULL;
	}
	m_size--;
	delete oldNode;
	return returnVal;
}