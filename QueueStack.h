#pragma once

#include "Stack.h"
#include "Queue.h"


class QueueStack : public Queue
{
protected:

	Stack* data;
	Stack* help;

public:
	QueueStack();
	void clear() override; 
	int dequeue() override;
	void enqueue(int value) override;
	int front() override;
	bool isEmpty() const override;
};

