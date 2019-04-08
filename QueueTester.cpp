/*
Authors: Evren Keskin, Jason Hagene

Date: 10/22/2018

Description: This program is the Lab 2b assignment, creating and demonstraiting a template queue in use
*/

#include "List.h"
#include "Queue.h"
#include <iostream>
#include <string>

#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  

using namespace std;

int main()
{
	cout << "This program will illustraite the usage of queues" << endl;
	Queue<string> stringQueue = Queue<string>();
	cout << "The program will enqueue the strings \"cat\" , \"dog\" , and \"kitten\" onto a queue" << endl;

	stringQueue.enqueue("cat");
	stringQueue.enqueue("dog");
	stringQueue.enqueue("kitten");

	//cout << "Now it will peek at the top of the list to see: " << stringQueue.peek() << endl;
	cout << "Now it will dequeue the first input item: ";
	string dequeued = stringQueue.dequeue();
	cout << dequeued << endl;
	cout << "Here is the front of the list: " << stringQueue.front() << endl;
	cout << "Here is the back of the list:  " << stringQueue.back() << endl;

	cout << endl << endl;


	Queue<double> doubleQueue = Queue<double>();
	cout << "Now a queue of doubles has been made" << endl;
	cout << "It will have 5.75 , 4.00, and 6.80 enqueued into it" << endl;
	doubleQueue.enqueue(5.75);
	doubleQueue.enqueue(4.00);
	doubleQueue.enqueue(6.00);
	cout << "Now it will be dequeued twice" << endl;
	cout << "Dequeing: " << doubleQueue.dequeue() << endl;
	cout << "Dequeing: " << doubleQueue.dequeue() << endl;
	cout << "Dequeing complete "<< doubleQueue.front() <<" is left in the queue" << endl;
	cout << endl << endl;
	
	stringQueue.~Queue();
	

	cout << "Queue deconstruction finished" << endl;

	doubleQueue.~Queue();

	system("pause");


	_CrtDumpMemoryLeaks();


	system("pause");
	return 0;
}
