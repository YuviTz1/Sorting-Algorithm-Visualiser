#pragma once
void buffer(int* arr, int screen[], int n)
{
	int* arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}

	for (int i = 0; i <= 120000; i = i + 500)
	{
		for (int j = 0; j < 500; j++)
		{
			if (j < n)
			{
				if (arr2[j] > 0)
				{
					screen[i + j] = 0x00ffffff;
					arr2[j] = arr2[j] - 1;
				}
			}
		}
	}
}

void clearBuffer(int screen[])
{
	for (int i = 0; i < 250 * 500; i++)
	{
		screen[i] = 0x00000000;
	}
}