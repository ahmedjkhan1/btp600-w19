#ifndef STACK_H
#define STACK_H
#include "dlist.h"

//This is the target
class Stack{
public:
	Stack();
	virtual void push(const int& o)=0;
	virtual void pop()=0;
	virtual int top() const =0;
	virtual bool isEmpty()=0;
	virtual int numItems()=0;
	virtual ~Stack();
};


//class below is not completed... you must structure this as a object adapter
//with appropriate requests and calls inheritance structure etc.
class ObjectAdapter{

};



//class below is not completed... you must structure this as a class adapter
//with appropriate requests and calls inheritance structure etc.
class ClassAdapter{

};
#endif