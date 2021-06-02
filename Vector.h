#pragma once
class Vector
{
	int* data;
	int capacity;
	int size;
	int x;
	int y;
public:
	Vector(int sizeKeeper = 2);
	Vector(const  Vector& p);
	~Vector();
	void assign(Vector b);
	void setSize(int mySize);
	void setCapacity(int myCapacity);
	int getSize();
	int getCapacity();
	void print();
	int isEqual(const Vector b);
	int& at(int index);

	float strcatcat(const Vector b);
	Vector strnewcat(const Vector b);
	void clear();
	void delLast();
	void insert(int val);


};

