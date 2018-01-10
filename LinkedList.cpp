#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() :m_head(NULL), m_tail(NULL), m_size(0) {}

LinkedList::~LinkedList() {
	Node *here = m_head, *nextNode;

	while (here != NULL) {
		nextNode = here->next;
		delete here;
		here = nextNode;
	}
}

unsigned int LinkedList::size() const
{
	return m_size;
}

bool LinkedList::isEmpty() const
{
	return (m_size==0);
}

//template<class Item>
//void LinkedList<Item>::addHead(Item item)
//{
//	m_head = new Node(item, m_head);
//	if (m_tail == NULL) {
//		m_tail = m_head;
//	}
//	m_size++;
//}

//	precondition: list is not already empty
MatchCard LinkedList::removeHead() {
	Node *oldNode = m_head;
	MatchCard returnVal = m_head->value;
	m_head = m_head->next;
	if (m_head == NULL) {
		m_tail = NULL;
	}
	m_size--;
	delete oldNode;
	return returnVal;
}

MatchCard LinkedList::retrieveHead() const {
	return m_head->value;
}

void LinkedList::addTail(MatchCard item)
{
	if (isEmpty()) {
		//addHead(item);
		m_head = m_tail = new Node(item);
		m_size++;
	}
	else {
		m_tail = m_tail->next = new Node(item);
		m_size++;
	}
}

////	precondition: list is not already empty
//template<class Item>
//Item LinkedList<Item>::removeTail() {
//	if (m_head == m_tail) {
//		return removeHead();
//	}
//	Node *preTail = m_head;
//	Item returnVal = m_tail->value;
//	while (preTail->next != m_tail) {
//		preTail = preTail->next;
//	}
//	preTail->next = NULL;
//	delete m_tail;
//	m_tail = preTail;
//	m_size--;
//	return returnVal;
//}

////	precondition: list is not already empty
//template<class Item>
//Item LinkedList<Item>::retrieveTail() const
//{
//	return m_tail->value;
//}

////	precondition: n should be a valid position [1<=n<=size()+1]
//template<class Item>
//void LinkedList<Item>::add(unsigned int n, Item item)
//{
//	if (n == 1) {
//		addHead(item);
//	}
//	else if (n == size() + 1) {
//		addTail(item);
//	}
//	else {
//		Node *here = m_head;
//		for (unsigned int k(1); k < n - 1; k++) {
//			here = here->next;
//			here->next = new Node(item, here->next);
//			m_size++;
//		}
//	}
//}

////	precondition: n must be a valid current list position [1<=n<=size()]
//template<class Item>
//Item LinkedList<Item>::replace(unsigned int n, Item item)
//{
//	Item returnValue;
//	Node *here = m_head;
//	for (unsigned int k(1); k < n; k++) {
//		here = here->next;
//	}
//	returnValue = here->value;
//	here->value = item;
//	return returnValue;
//}

////	precondition: n must be a valid current list position [1<=n<=size()]
//template<class Item>
//void LinkedList<Item>::remove(unsigned int n)
//{
//	if (n == 1) {
//		retrun removeHead();
//	}
//	if (n == size()) {
//		return removetail();
//	}
//	Node *here = m_head;
//	for (unsigned int k(1); k < n - 1; k++) {
//		here = here->next;
//	}
//	Node *kill = here->next;
//	Item returnVal = kill->value;
//	here->next = kill->next;
//	delete kill;
//	m_sze--;
//	return returnVal;
//}

////	precondition: n must be a valid current list position [1<=n<=size()]
//template<class Item>
//int LinkedList<Item>::retrieve(unsigned int n) const
//{
//	if (n == 1) {
//		return retrieveHead();
//	}
//	if (n == size()) {
//		return retrieveTail();
//	}
//	Node * here = m_head;
//
//
//			////LinkedList<int> a;
//			//////	traversal using iterator TEMPLATE
//			////for (LinkedList<int>::Iterator k = a.begin(); k != a.end(); ++k) {
//			////	cout << k.getValue() << endl;
//			////}
//			//////	traversal using iterator 
//			////for (LinkedList<int>::Iterator k = m_head; k != m_tail; k++) {
//			////	cout << k.getValue << endl;
//			////}
//
//
//	for (unsigned int k(1); k < n; k++) {
//		here = here->next;
//		return here->value;
//	}
//}