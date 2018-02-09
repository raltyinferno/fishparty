// Jake Conner, 9/5/2017
// quicksort algorithm test
// CS 471, assignment 1

#include "Quicksort.h"
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <string>

const int LENGTH = 5;

int main()
{
	srand(time(0));
	int run = 1;
	std::vector<int> arr;
	for (int i = 0; i < LENGTH; i++) {
		arr.push_back(rand() % 100 + 1);
	}

	while (run)
	{
		//Output before sort.
		std::cout << "A vector of ints, before the sort: " << std::endl;
		for (int i = 0; i < LENGTH; i++){
			std::cout << arr.at(i) << std::endl;
		}
		std::cout << std::endl;

		// Sort in descending order.
		quicksort(&arr.front(), LENGTH, DESCENDING);

		// Output sorted in descending order.
		std::cout << "Sorted in descending order: " << std::endl;
		for (int i = 0; i < LENGTH; i++){
			std::cout << arr.at(i) << std::endl;
		}
		std::cout << std::endl;

		// Sort in ascending ...
		quicksort(&arr.front(), LENGTH, ASCENDING);

		// Output sorted in ascending order.
		std::cout << "Sorted in ascending order: " << std::endl;
		for (int i = 0; i < LENGTH; i++){
			std::cout << arr.at(i) << std::endl;
		}

		// Try it with a normal array.
		int arr2[LENGTH];
		for (int i = 0; i < LENGTH; i++) {
			arr2[i] = rand() % 100 + 1;
		}
		std::cout << std::endl;

		std::cout << "A normal array of ints. Before the sort: " << std::endl;
		for (int i = 0; i < LENGTH; i++){
			std::cout << arr2[i] << std::endl;
		}
		std::cout << std::endl;

		quicksort(arr2, LENGTH, DESCENDING);

		std::cout << "Sort in descending order: " << std::endl;
		for (int i = 0; i < LENGTH; i++) {
			std::cout << arr2[i] << std::endl;
		}
		std::cout << std::endl;

		quicksort(arr2, LENGTH, ASCENDING);

		std::cout << "Sort in ascending order: " << std::endl;
		for (int i = 0; i < LENGTH; i++) {
			std::cout << arr2[i] << std::endl;
		}
		std::cout << std::endl;

		// Test with an array of doubles.
		double arr3[LENGTH];
		for (int i = 0; i < LENGTH; i++) {
			arr3[i] = (rand() / 100.00);
		}

		std::cout << "A normal array of doubles. Before the sort: " << std::endl;
		for (int i = 0; i < LENGTH; i++) {
			std::cout << arr3[i] << std::endl;
		}
		std::cout << std::endl;

		quicksort(arr3, LENGTH, DESCENDING);

		std::cout << "Sort in descending order: " << std::endl;
		for (int i = 0; i < LENGTH; i++) {
			std::cout << arr3[i] << std::endl;
		}
		std::cout << std::endl;

		quicksort(arr3, LENGTH, ASCENDING);

		std::cout << "Sort in ascending order: " << std::endl;
		for (int i = 0; i < LENGTH; i++) {
			std::cout << arr3[i] << std::endl;
		}
		std::cout << std::endl;

		// Test with an empty array
		int * arr4 = new int[0];
		std::string passFail = "... PASSED";
		std::cout << "Test an empty array: " << std::endl;
		try
		{
			quicksort(arr4, 0, ASCENDING);
		}
		catch (...)
		{
			passFail = "... FAILED";
		}
		std::cout << passFail << std::endl;

		// Try an empty vector
		std::vector<int> arr5;
		passFail = "... PASSED";
		std::cout << "Test an empty vector: " << std::endl;
		try
		{
			quicksort(&arr5, 0, ASCENDING);
		}
		catch (...)
		{
			passFail = "... FAILED";
		}
		std::cout << passFail << std::endl;

		system("pause");

		// Try a large vector
		std::vector<int> arr6;
		for (int i = 0; i < 2000; i++)
		{
			arr6.push_back(rand() % 10 + 1);
		}

		std::cout << "Large vector before sort: " << std::endl;

		for (int i = 0; i < 2000; i++)
		{
			std::cout << arr6.at(i) << ", ";
		}
		std::cout << std::endl << std::endl << "After sort: " << std::endl;

		quicksort(&arr6.front(), 2000, ASCENDING);

		for (int i = 0; i < 2000; i++)
		{
			std::cout << arr6.at(i) << ", ";
		}

		std::cout << std::endl;
		system("pause");

		// Try a VERY large vector in descending order and time it.
		std::vector<int> arr7;
		for (int i = 0; i < 300000; i++)
		{
			arr7.push_back(rand() % 10);
		}

		std::cout << "Very large vector in descending order: " << std::endl;

		for (int i = 0; i < 300000; i++)
		{
			//std::cout << arr7.at(i) << ", ";
		}
		//std::cout << std::endl << std::endl << "After sort: ";

		std::clock_t start = clock();
		quicksort(&arr7.front(), 300000, DESCENDING);
		std::clock_t end = clock();

		int last = -1;
		int count = 0;
		for (int i = 0; i < 300000; i++)
		{
			if (last == arr7.at(i))
			{
				count++;
			}
			else
			{
				if (last > 0)
				{
					std::cout << count << " instances of " << last << std::endl;
				}
				last = arr7.at(i);
				count = 1;
			}
		}
		std::cout << count << " instances of " << last << std::endl;

		std::cout << std::endl << std::endl << "quicksort took " << ((end-start)/(CLOCKS_PER_SEC*1.000000000)) << " seconds to sort an array length 300,000. " << std::endl;

		system("pause");

	}
	return 0;
}