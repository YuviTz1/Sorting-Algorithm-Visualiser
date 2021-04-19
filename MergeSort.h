#pragma once
#include"platform.h"
#include"buffer.h"

class MergeSort
{
public:
	int n = 450;
	int arr[450];
	int* screen = new int[250 * 500];
	platform sdlPlatform;

	MergeSort()
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 200 + 1;
		}
		clearBuffer(screen);
	}
	~MergeSort()
	{
		delete[] screen;
	}

	void merge(int arr[], int l, int m, int r, int timeDelay)
	{
		int n1 = m - l + 1;
		int n2 = r - m;
		int* L = new int[n1];
		int* R = new int[n2];

		for (int i = 0; i < n1; i++)
		{
			L[i] = arr[l + i];
		}
		for (int j = 0; j < n2; j++)
		{
			R[j] = arr[m + 1 + j];
		}
		int i = 0;
		int j = 0;
		int k = l;

		while (i < n1 && j < n2) 
		{
			if (L[i] <= R[j]) 
			{
				arr[k] = L[i];
				i++;
				buffer(arr, screen, n);
				sdlPlatform.update(screen, timeDelay);
				clearBuffer(screen);
			}
			else 
			{
				arr[k] = R[j];
				j++;
				buffer(arr, screen, n);
				sdlPlatform.update(screen, timeDelay);
				clearBuffer(screen);
			}
			k++;
		}

		while (i < n1) 
		{
			arr[k] = L[i];
			i++;
			k++;
			buffer(arr, screen, n);
			sdlPlatform.update(screen, timeDelay);
			clearBuffer(screen);
		}

		while (j < n2) 
		{
			arr[k] = R[j];
			j++;
			k++;
			buffer(arr, screen, n);
			sdlPlatform.update(screen, timeDelay);
			clearBuffer(screen);
		}

	}

	void mergeSort(int arr[], int l, int r, int timeDelay) {
		if (l >= r) 
		{
			return;
		}
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m, timeDelay);
		mergeSort(arr, m + 1, r, timeDelay);
		merge(arr, l, m, r, timeDelay);
	}

	void render(int timeDelay)
	{
		mergeSort(arr, 0, n - 1, timeDelay);
	}
};