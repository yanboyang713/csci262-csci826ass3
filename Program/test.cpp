#include <iostream>
using namespace std;
void BubbleSort(int[], int, int, int);
int main()
{
	int length = 6;
	int array[length];
	int start = 2;
	int last = 0;
	
	array[0] = 6;

	array[2] = 1;
	array[3] = 8;
	array[4] = 2;
	array[5] = 4;
	
	BubbleSort(array, start, last, length);
	
	for (int i = start; i < last; i++)
		cout << array[i] << endl;
	return 0;
}
// Bubble Sort Function for Descending Order 
void BubbleSort(int num[], int start, int last, int length)
{
	int flag = 1;    // set flag to 1 to start first pass
	int temp;             // holding variable
	int numLength = length; 
	for(int i = start; (i < last) && flag; i++)
	{
		cout << "i = " << i << endl;
		flag = 0;
		for (int j = 0; j < (numLength -1); j++)
		{
			if (num[j + 1] < num[j])      // ascending order simply changes to <
			{ 
				temp = num[j];             // swap elements
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;               // indicates that a swap occurred.
			}
		}
	}
	return;   //arrays are passed to functions by address; nothing is returned
}
/*// Bubble Sort Function for Descending Order 
void BubbleSort(int num[], int start, int last)
{
	int flag = 1;    // set flag to 1 to start first pass
	int temp;             // holding variable
	int numLength = last; 
	for(int i = 1; (i <= numLength) && flag; i++)
	{
		flag = 0;
		for (int j = 0; j < (numLength -1); j++)
		{
			if (num[j + 1] < num[j])      // ascending order simply changes to <
			{ 
				temp = num[j];             // swap elements
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;               // indicates that a swap occurred.
			}
		}
	}
	return;   //arrays are passed to functions by address; nothing is returned
}*/