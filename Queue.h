#pragma once
#include "List.h"

template <class ObjectType>
class Queue : protected List<ObjectType>{
public:
	Node<ObjectType>* tail;
	Queue() {
		tail = nullptr;
	}

	void enqueue(ObjectType obj) {
		addFirst(obj);
	}

	ObjectType dequeue() {
		ObjectType temp = findSelect(listSize());
		removeSelect listSize();
		return temp;
	}

	ObjectType front() {
		//I begrudgingly accept the index starting at 1 because I don't want to mess with the spaghetti
		return findSelect(1);
	}

	ObjectType back() {
		return findSelect(listSize);
	}

	void empty() {
		clearList();
	}
};