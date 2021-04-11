#pragma once
#include"platform.h"
#include"buffer.h"

class SelectionSort
{
public:

	int n = 450;
	int arr[450];
	int* screen = new int[250 * 500];
	platform sdlPlatform;

	SelectionSort()
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 200 + 1;
		}
		clearBuffer(screen);
		
	}
	~SelectionSort()
	{
		delete[] screen;
	}

	void swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	void render(int timeDelay)
	{
		int min = arr[0];
		int x = 0;
		for (int i = 0; i < n - 1; i++)
		{
			min = arr[i];
			x = i;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < min)
				{
					min = arr[j];
					x = j;
				}
			}
			swap(arr[i], arr[x]);
			buffer(arr, screen, n);
			sdlPlatform.update(screen, timeDelay);
			clearBuffer(screen);
		}
	}

};