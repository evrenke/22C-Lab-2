#pragma once
#include "List.h"

template <class ObjectType>
class Stack : protected List
{
public:
	void push(ObjectType ot);
	void pop(ObjectType ot);
	bool isEmpty();
};
