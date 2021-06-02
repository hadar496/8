#pragma once

class Stack
{
public:
	virtual void push(int key) = 0;
	virtual int pop() = 0;
	virtual int top() = 0;
	virtual bool isEmpty() = 0;
	virtual void clear() = 0;
};