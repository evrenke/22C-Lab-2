#pragma once

template <class ObjectType>
class Node
{
private:
	Node* ptr;
	ObjectType* objectPtr;
public:

	Node(Node *nextPtr, ObjectType *ot)
	{
		ptr = nextPtr;
		objectPtr = ot;
	}
	Node(ObjectType *ot)
	{
		ptr = null;
		objectPtr = ot;
	}

	~Node()
	{
		delete objectPtr;
	}
};