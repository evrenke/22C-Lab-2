#pragma once
#include "Node.h"

template <class ObjectType>
class List
{
private:

public:
	List();

	~List();
	void addFirst(ObjectType ot);
	void addLast(ObjectType ot);
	void addSelect(ObjectType ot, int index);

	int findSelect(ObjectType ot);
	int listCount();
	bool removeSelect(ObjectType ot, int index);
	void emptyList();
};
