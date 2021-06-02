#pragma once

class Queue
{
public:
    virtual void clear() = 0;
    virtual void enqueue(int value) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual bool isEmpty() const = 0;
};
//************************************************************************

//int Queue::dequeue() {
//
//	return;
//
//}
//void Queue::clear() {}
//
//void Queue::enqueue(int value) {
//
//}
//int Queue::front() {
//
//	return ;
//}
//bool Queue::isEmpty() const {
//    return ;
//
//}



