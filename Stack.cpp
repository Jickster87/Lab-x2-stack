#include "Stack.h"
#include <exception>


using namespace std;


Stack::Stack() {
	capacity = 8;
	someStack = new TElem[capacity];
	sizeArray = 0;
	topElem = -1;
}


void Stack::resizeStack() {
	int newCapacity = capacity * 2;
	TElem* newStack = new TElem[newCapacity];

	for (int i = 0; i < sizeArray; i++)
	{
		newStack[i] = someStack[i];
	}
	delete[] someStack;
	someStack = newStack;
	capacity = newCapacity;
	//topElem = sizeArray - 1;
}


void Stack::push(TElem e) {
	// check if it's full
	if (sizeArray == capacity)
	{
		resizeStack();
	}
	// push new elem
	topElem++;
	someStack[topElem] = e;
	sizeArray++;
}

TElem Stack::top() const {
	if (isEmpty())
	{
		throw exception();
	};
	return someStack[topElem];
}

TElem Stack::pop() {
	if (isEmpty())
	{
		throw exception();
	};
	TElem elem = someStack[topElem];
	topElem--;
	sizeArray--;
	return elem;
}


bool Stack::isEmpty() const {
	return sizeArray == 0;
}

Stack::~Stack() {
	delete[] someStack;
}