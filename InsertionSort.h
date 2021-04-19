#pragma once
#include"platform.h"
#include"buffer.h"

class InsertionSort
{
public:
	int n = 450;
	int arr[450];
	int* screen = new int[250 * 500];
	platform sdlPlatform;

	InsertionSort()
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 200 + 1;
		}
		clearBuffer(screen);
	}
	~InsertionSort()
	{
		delete[] screen;
	}

	void render(int timeDelay)
	{
		int key, j;
		for (int i = 1; i < n; i++)
		{
			key = arr[i];
			j = i - 1;
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				buffer(arr, screen, n);
				sdlPlatform.update(screen, timeDelay);
				clearBuffer(screen);
				j--;
			}
			arr[j + 1] = key;

			buffer(arr, screen, n);
			sdlPlatform.update(screen, timeDelay);
			clearBuffer(screen);
		}
	}
};