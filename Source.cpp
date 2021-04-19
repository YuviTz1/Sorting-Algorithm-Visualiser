#include<iostream>
#include<SDL.h>
#include"platform.h"
#include"buffer.h"

#include"bubbleSort.h"
#include"SelectionSort.h"
#include"InsertionSort.h"
#include"MergeSort.h"
using namespace std;

int main(int argc, char* argv[])
{
	srand(time(NULL));

	int choice;
	char ans = 'y';
	cout << "Enter number corresponding to the sorting algorithm" << endl;
	cout << "1 - Bubble Sort" << endl;
	cout << "2 - Selection Sort" << endl;
	cout << "3 - Insertion Sort" << endl;
	cout << "4 - Merge Sort" << endl;
	

	while (ans == 'y')
	{
		cout << "Enter number corresponding to the sorting algorithm" << endl;
		cin >> choice;
		if (choice == 1)
		{
			int t;
			cout << "Enter time delay in milliseconds" << endl;
			cout << "(Bubble sort is slow!\nTherefore, it is recommended to enter 0 as time delay)" << endl;
			cin >> t;
			bubbleSort bubblesort;
			bubblesort.render(t);
		}
		else if (choice == 2)
		{
			int t;
			cout << "Enter time delay in milliseconds" << endl;
			cin >> t;
			SelectionSort selectionsort;
			selectionsort.render(t);
		}
		else if (choice == 3)
		{
			int t;
			cout << "Enter time delay in milliseconds" << endl;
			cout << "(Insertion sort is slow!\nTherefore, it is recommended to enter 0 as time delay)" << endl;
			cin >> t;
			InsertionSort insertionsort;
			insertionsort.render(t);
		}
		else if (choice == 4)
		{
			int t;
			cout << "Enter time delay in milliseconds" << endl;
			cin >> t;
			MergeSort mergesort;
			mergesort.render(t);
		}
		else
		{
			cout << "Enter a valid choice" << endl;
		}

		cout << "Do you wish to continue?" << endl;
		cout << "y/n" << endl;
		cin >> ans;

	}
	
	return EXIT_SUCCESS;
}
