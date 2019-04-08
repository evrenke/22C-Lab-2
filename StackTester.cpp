/*
	Authors: Evren Keskin, Jason Hagene

	Date: 10/17/2018

	Description: This program is the Lab 2 assignment, creating and demonstraiting a template Singly Linked List and Stack 
*/


#include "Stack.h"
#include "Currency.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "This program will illustraite the usage of stacks" << endl;
	Stack<string> stringStack = Stack<string>();
	cout << "The program will push the strings \"cat\" , \"dog\" , and \"kitten\" onto a stack" << endl;

	stringStack.push("cat");
	stringStack.push("dog");
	stringStack.push("kitten");

	cout << "Now it will peek at the top of the list to see: " << stringStack.peek() << endl;
	cout << "Now it will pop the top item and peek again: ";
	stringStack.pop();
	cout << stringStack.peek() << endl;


	cout << endl << endl;


	Stack<double> doubleStack = Stack<double>();
	cout << "Now a stack of doubles has been made" << endl;
	cout << "It will have 5.75 , 4.00, and 6.80 pushed into it" << endl;
	doubleStack.push(5.75);
	doubleStack.push(4.00);
	doubleStack.push(6.00);
	cout << "Now it will be popped twice" << endl;
	doubleStack.pop();
	doubleStack.pop();
	cout << "The data on top of the stack: " << doubleStack.peek() << endl;


	cout << endl << endl;
	
	
	cout << "Now a stack of Currency stacks will be made" << endl;
	Stack<Currency> currencyStack = Stack<Currency>();
	cout << "It will have a Dollar, an Euro, and a Yen object pushed in that order" << endl;
	Dollar dollar = Dollar();
	dollar.setWholeParts(500);
	currencyStack.push(dollar);
	dollar.~Dollar();
	Euro euro = Euro();
	euro.setWholeParts(600);
	currencyStack.push(euro);
	euro.~Euro();
	Yen yen = Yen();
	yen.setWholeParts(7000);
	currencyStack.push(yen);
	yen.~Yen();
	cout << "Each currency was constructed with a whole value, " << endl;
	cout << "and now we can read that value after popping each one off the list" << endl;
	cout << "The Yen object has : " << currencyStack.peek().getWholeParts() << " Yen in it" << endl;
	currencyStack.pop();
	cout << "The Euro object has : " << currencyStack.peek().getWholeParts() << " Euroes in it" << endl;
	currencyStack.pop();
	cout << "The Dollar object has : " << currencyStack.peek().getWholeParts() << " Dollars in it" << endl;
	currencyStack.pop();
	cout << "And now the currencyStack is empty again" << endl;
	cout << "the return from the isEmpty function:" << currencyStack.isEmpty() << endl;

	
	stringStack.~Stack();
	doubleStack.~Stack();
	currencyStack.~Stack();
	
	
	system("pause");
	return 0;
}
