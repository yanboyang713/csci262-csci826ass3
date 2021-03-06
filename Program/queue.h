/*-------------------------------------------------------------
Student's Name: Boyang YAN
Student's email address: by932@uowmail.edu.au
Last Modification: 14/10/2016
-------------------------------------------------------------*/
#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
using namespace std;
template <class T >class Queue;
template <class T>
std::ostream &operator<<(std::ostream &out,const Queue<T> &print);

template <class T>
class Queue
{
	friend std::ostream &operator<< <T>(std::ostream &out,const Queue<T> & print);
	private:
		T * queue;
		int front, rear;
		int maxSizeOfQueue;
		int lengthOfQueue;
		int maxLengthOfQueue;
	public:	
		Queue();	// Constructor
		Queue(int);	// Constructor
		~Queue();	// destructor
		bool isEmpty() const;
		bool IsFull();	
		void Enqueue(T);	// Inserts an element in queue at rear end 
		void Dequeue();	// Removes an element in Queue from front end.	 
		T Front();	// Returns element at front of queue.
		T getElement(int);
		void setElement(int, T);
		int getFront() const;
		int getRear() const;
		int getMaxSizeOfQueue() const;
		int getLengthOfQueue() const;
		int getMaxLengthOfQueue() const;		
		void judgeWhetherMaxLength(int);
		void BubbleSort();
		int checkElementSame();
};

#endif
