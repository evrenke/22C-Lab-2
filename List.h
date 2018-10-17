#pragma once
#include "Node.h"

template <class ObjectType>
class List
{
private:
	Node *head;
public:
	List()
	{
		head = null;
	}

	~List()
	{
		Node *nextOnList = head;
		while (nextOnList != null)
		{
			nextOnList = head->getNext();
			head->~Node();
			head = nextOnList;
		}
		delete head;
	}
	void addFirst(ObjectType ot)
	{
		Node *newFirst = new Node(head->getNext(), &ot);
		head = newFirst;
	}
	void addLast(ObjectType ot)
	{
		Node *newLast = new Node(null, &ot);
		Node *last = head;
		while (last->getNext() != null)
		{
			last = last->getNext();
		}
		last->setNext(newLast);
	}
	void addSelect(ObjectType ot, int index)
	{
		Node *newPrev = head;
		Node *newNext = head->getNext();
		for (int ind = 0; newNext != null && ind < index; ind++)
		{
			newPrev = newPrev->getNext();
			newNext = newNext->getNext();
		}
		Node *newNode = new Node(newNext, &ot);
		newPrev->setNext(newNode);
	}

	int findSelect(ObjectType ot)
	{
		int index - 0;
		Node *next = head;
		while (next != null)
		{
			if (next->getData() == ot)
				return index;
			index++;
		}
		return -1;
	}
	int  listCount()
	{
		int size = 0;
		Node *next = head;
		while (next != null)
		{
			size++;
		}
		return size;
	}
	bool removeSelect(ObjectType ot, int index)
	{
		index = findSelect(ot);
		if (index == -1)
			return false; //it cant be removed if its not on the list
		
		Node *prev = head;
		Node *next = head->getNext();
		for (int ind = 0; next != null && ind < index; ind++)
		{
			prev = prev->getNext();
			next = next->getNext();
		}
		prev->setNext(next);
		return true;
	}
	void emptyList()
	{
		Node *nextOnList = head;
		while (nextOnList != null)
		{
			nextOnList = head->getNext();
			head->~Node();
			head = nextOnList;
		}
		head = null;
	}
};
