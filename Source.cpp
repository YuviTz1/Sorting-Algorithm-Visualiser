#include<iostream>
#include<SDL.h>
#include<chrono>
#include<thread>
#include"platform.h"
#include"buffer.h"
#include"bubbleSort.h"
using namespace std;

int main(int argc, char* argv[])
{
	srand(time(NULL));

	bubbleSort bubblesort;

	bubblesort.render();

	cin.get();
	
	return EXIT_SUCCESS;
}
