/*-------------------------------------------------------------
Student's Name: Boyang YAN
Student's email address: by932@uowmail.edu.au
Last Modification: 14/10/2016
-------------------------------------------------------------*/
#include <iostream>
#include "queue.h"
template <class T>
Queue<T>::Queue()// Constructor
{
	front = -1; 
	rear = -1;	
	queue = NULL;
	maxSizeOfQueue = 0;
	lengthOfQueue = 0;
	maxLengthOfQueue = 0;
}
template <class T>
Queue<T>::Queue(int queueSize)	// Constructor
{
	front = -1; 
	rear = -1;
	queue = new T[queueSize];
	maxSizeOfQueue = queueSize;
}
template <class T>
Queue<T>::~Queue()	// destructor
{
	front = -1; 
	rear = -1;	
	delete []queue;
	maxSizeOfQueue = 0;
}
template <class T>
bool Queue<T>::isEmpty() const// To check wheter Queue is empty or not
{
	return (front == -1 && rear == -1); 
}
template <class T>
bool Queue<T>::IsFull()// To check whether Queue is full or not
{
	return (rear + 1) % maxSizeOfQueue == front ? true : false;
}
template <class T>	
void Queue<T>::Enqueue(T x)// Inserts an element in queue at rear end
{
	if(IsFull())
	{
		cout<<"Error: Queue is Full" << endl;
		return;
	}
	if (isEmpty())
		front = rear = 0;
	else
	    rear = (rear + 1) % maxSizeOfQueue;
	queue[rear] = x;
	lengthOfQueue++;	
	return;
}
template <class T>
void Queue<T>::judgeWhetherMaxLength(int length)
{
	if (length > maxLengthOfQueue)
		maxLengthOfQueue = length;
	return;
}

template <class T>
void Queue<T>::Dequeue()// Removes an element in Queue from front end.
{
	if(isEmpty())
	{
		cout<<"Error: Queue is Empty" << endl;
		return;
	}
	else if(front == rear )
		rear = front = -1;
	else
		front = (front + 1) % maxSizeOfQueue;
	lengthOfQueue--;
}
// Returns element at front of queue. 
template <class T>
T Queue<T>::Front()
{
	if(front == -1)
	{
		cout<<"Error: cannot return front from empty queue" << endl;
		return -1; 
	}
	return queue[front];
}
template <class T>
std::ostream & operator << (std::ostream &out,const Queue<T> & print)
{
	// Finding number of elements in queue  
	int count = (print.getRear() + print.getMaxSizeOfQueue() - print.getFront()) % print.getMaxSizeOfQueue() + 1;
	out<<"Queue       : ";
	for(int i = 0; i <count; i++)
	{
		int index = (print.getFront() + i) % print.getMaxSizeOfQueue(); // Index of element while travesing circularly from front
		out << print.queue[index] << " | ";
	}
	out << print.lengthOfQueue;
	return out;
}
template <class T>
int Queue<T>::getFront() const
{
	return front;
}
template <class T>
int Queue<T>::getRear() const
{
	return rear;
}
template <class T>
int Queue<T>::getMaxSizeOfQueue() const
{
	return maxSizeOfQueue;
}
template <class T>
int Queue<T>::getLengthOfQueue() const
{
	return lengthOfQueue;
}
template <class T>
int Queue<T>::getMaxLengthOfQueue() const
{
	return maxLengthOfQueue;
}
