#include "Vector.h"
#include <iostream>
using namespace std;
void Vector::setSize(int mySize)
{
	size = mySize;

}

void Vector::setCapacity(int myCapacity)
{
	capacity = myCapacity;

}

int Vector::getSize()
{
	return size;
}

int Vector::getCapacity()
{
	return capacity;
}
Vector::~Vector() {//delete

	if (data)
		delete[] data;


}
void Vector::assign(Vector b) {//Which receives as an additional vector parameter and changes the current vector to be the same as the obtained vector

	data = new int[b.capacity];
	size = b.size;
	capacity = b.capacity;
	for (int i = 0; i < size; i++)
		data[i] = b.data[i];


}
int  Vector::isEqual(Vector b) {//Checks if they are equal
	if (size != b.size)
		return 0;
	for (int i = 0; i < size; i++)
	{
		if (data[i] != b.data[i])
			return 0;
	}
	return 1;


}
float  Vector::strcatcat(const Vector b) {//Added and performs a scalar product between two vectors

	int sum = 0;
	if (size != b.size) {
		cout << " ERROR" << endl;
		return -1;
	}
	for (int i = 0; i < size; i++)
	{
		sum += data[i] * b.data[i];
	}
	return sum;


}
int& Vector::at(int index) {//To place and return a value in a requested cell Vector.
	if (index > size - 1 || index < 0) {
		cout << "ERROR" << endl;
		return data[0];
	}
	return data[index];
}

void Vector::print() {//print

	cout << "capacity: " << getCapacity() << " size: " << getSize() << " values: ";
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;


}
Vector::Vector(int sizeKeeper) {//Creates an array
	if (sizeKeeper > 0)
		capacity = sizeKeeper;
	else capacity = 2;

	data = new int[capacity];
	for (int i = 0; i < capacity; i++)
	{
		data[i] = 0;
	}
	size = 0;


}
Vector::Vector(const  Vector& p) {//Copies entry to entry
	size = p.size;
	capacity = p.capacity;

	data = new int[p.capacity];
	for (int i = 0; i < (p.size); i++)
		data[i] = p.data[i];



}


Vector Vector::strnewcat(const Vector v) {//To thread two vectors
	Vector v3(size + v.size);
	int i = 0;
	for (; i < size; i++)
	{
		v3.data[i] = data[i];
	}
	for (int i2 = 0; i2 < v.size; i++, i2++)
	{
		v3.data[i] = v.data[i2];
	}
	v3.capacity = capacity + v.capacity;
	v3.size = size + v.size;
	return v3;
}

void Vector::clear() {//clear
	size = 0;

	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
}

void Vector::delLast() {//Deleting the last member of the vector.
	if (size == 0) {
		cout << "ERROR" << endl;
		return;
	}
	data[size - 1] = 0;
	size--;
}

void Vector::insert(int val) {//המציבה את הערך val במקום הבא הפנוי במערך.
	if (size >= capacity) {
		int* help = new int[2 * size];
		for (int i = 0; i < size * 2; i++)
		{
			help[i] = 0;
		}
		for (int i = 0; i < size; i++)
		{
			help[i] = data[i];
		}
		delete[] data;
		data = help;
		capacity = 2 * size;
	}
	data[size] = val;
	size++;
}

