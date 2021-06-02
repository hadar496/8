#pragma once
#include"Stack.h"
#include "Vector.h"
class VectorStack :public Stack
{
private:
	int* vec;
	int size;
	int head;
public:
	VectorStack(int s);
	~VectorStack();
	void push(int key) override;
	int pop()override;
	int top()override;
	bool isEmpty()override;
	void clear()override;
};

//*******************************************

VectorStack::VectorStack(int s)
{
	size = s;
	vec = new int[size];
	head = 0;
}

VectorStack::~VectorStack()
{
	delete[] vec;
}

void VectorStack::push(int key)
{
	if (head == size)
		throw "stack is full cannot add key to stack\n";
	vec[head++] = key;

}

int VectorStack::pop()
{
	if (isEmpty())
		throw "stack is empty\n";
	head--;
	return vec[head];
}
int VectorStack::top()
{
	if (isEmpty())
		throw "stack is empty\n";
	return vec[head - 1];
}

bool VectorStack::isEmpty()
{
	return head == 0;
}
void VectorStack::clear()
{
	head = 0;
}