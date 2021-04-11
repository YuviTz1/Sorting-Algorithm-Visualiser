#include<iostream>
#include<SDL.h>
#include"platform.h"
#include"buffer.h"
#include"bubbleSort.h"
#include"SelectionSort.h"
using namespace std;

int main(int argc, char* argv[])
{
	srand(time(NULL));

	int choice;
	cout << "Enter number corresponding to the sorting algorithm" << endl;
	cout << "1 - Bubble Sort" << endl;
	cout << "2 - Selection Sort" << endl;
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
	
	return EXIT_SUCCESS;
}
