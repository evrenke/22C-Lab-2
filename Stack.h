#pragma once
#include "List.h"

template <class ObjectType>
class Stack : protected List
{
public:
	Stack() {
		//Initialize to an empty pointer. This will always be at the bottom of the stack. Failure to do so means the stack will go into other memory.
		topItem = nullptr;
	}
	//Add an object to the stack. 1st in, 1st out
	void push(ObjectType ot) {
		addFirst(ot);
	}
	//Remove the most recently added object and return it
	ObjectType pop() {
		ObjectType temp = findSelect(0);
		removeSelect(0);
		return temp;
	}
	//Return if the stack is empty
	bool isEmpty() {
		return (topItem == nullptr);
	}
};
