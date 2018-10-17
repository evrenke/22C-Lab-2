#pragma once
#include "Node.h"

template <class ObjectType>
class List
{
private:
	Node* firstElem;
public:
	List() {
		firstElem = nullptr;
	}

	~List() {
		emptyList();
	}
	void addFirst(ObjectType ot) {
		firstElem = new Node(firstElem, ot);
	}
	void addLast(ObjectType ot) {
	}
	void addSelect(ObjectType ot, int index);

	ObjectType findSelect(int i);
	int listCount();
	void removeSelect(int index) {
	}
	void emptyList() {
		while (firstElem != nullptr) {
			removeSelect(0)
		}
	}
};
