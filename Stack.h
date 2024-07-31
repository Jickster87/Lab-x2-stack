#pragma once
//DO NOT CHANGE THIS PART
typedef int TElem;
#define NULL_TELEM -111111

class Stack
{
private:

	TElem* someStack;
	int capacity;
	int sizeArray;
	int topElem;
	void resizeStack();
	
public:

	//constructor
	Stack();
	
	//pushes an element to the top of the Stack
	void push(TElem e);
	
	//returns the element from the top of the Stack
	//throws exception if the stack is empty
	TElem top() const;
	   
	//removes and returns the element from the top of the Stack
	//throws exception if the stack is empty
	TElem pop();
	   
	//checks if the stack is empty
	bool isEmpty() const;
	
	//destructor
	~Stack();
};

