#pragma once
#include<iostream>
#include"platform.h"
#include"buffer.h"

class bubbleSort
{
public:

	int n = 450;
	int arr[450];
	int screen[250 * 500];
	
	platform sdlPlatform;

	bubbleSort()
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 200 + 1;
		}
		clearBuffer(screen);
	}

	void swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	void render()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - i; j++)
			{
				if (arr[j - 1] > arr[j])
				{
					swap(arr[j - 1], arr[j]);
				}
				buffer(arr, screen, j, n);
				sdlPlatform.update(screen);
				clearBuffer(screen);
			}
		}
	}
};

