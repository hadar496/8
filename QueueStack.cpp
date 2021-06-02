#include "QueueStack.h"
#include "VectorStack.h"
#include "Vector.h"

QueueStack::QueueStack() {
	data = new VectorStack(0);
}
int QueueStack::dequeue() {

	return data->pop();

}
void QueueStack::clear() {

//VectorStack:clear();

	data->clear();
}

void QueueStack::enqueue(int value) {
	data->push(value);

}
int QueueStack::front() {

	return data->top();
}
bool QueueStack::isEmpty() const {

	return data->isEmpty();//לבדוק שאכן זה הולך לפונק של האבא

}

