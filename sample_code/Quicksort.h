// Jake Conner, 9/5/2017
// Quicksort header
// CS 471, assignment 1

#ifndef Quicksort_H_INCLUDED
#define Quicksort_H_INCLUDED

#define ASCENDING true
#define DESCENDING false

#include <algorithm>
#include <random>
#include <ctime>

// quicksort function.
// PRE: Array is contiguous in memory, is of the given length, and its contents can be compared via the "<" and ">" operators.
// POST: The array is sorted in the specified order, (ASCENDING or DESCENDING).
template <typename L_Type>
void quicksort(L_Type Array, int length, bool order) {
	if (order)
	{
		srand(time(0));
		A_QSORT(Array, Array, Array + length - 1);
	}
	else
	{
		srand(time(0));
		D_QSORT(Array, Array, Array + length - 1);
	}
}

//A_QSORT, used by quicksort algorithm.
template <typename L_Type, typename I_Type>
void A_QSORT(L_Type A, I_Type* lo, I_Type* hi) {
	if (lo < hi)
	{
		I_Type* p = A_PART(A, lo, hi, hi-lo);
		A_QSORT(A, lo, p);
		A_QSORT(A, p + 1, hi);
	}
}

//A_PART, used by quicksort algorithm.
template <typename L_Type, typename I_Type>
I_Type* A_PART(L_Type A, I_Type* lo, I_Type* hi, int len) {
	I_Type pivot = *(lo + (rand() % len));
	I_Type* i = lo - 1;
	I_Type* j = hi + 1;
	while (true)
	{
		do
		{
			i++;
		} while (*i < pivot);
		do
		{
			j--;
		} while (*j > pivot);
		if (i >= j)
		{
			return j;
		}
		std::swap(*i, *j);
	}
}

//D_QSORT, used by quicksort algorithm.
template <typename L_Type, typename I_Type>
void D_QSORT(L_Type A, I_Type* lo, I_Type* hi) {
	if (lo < hi)
	{
		I_Type* p = D_PART(A, lo, hi, hi-lo);
		D_QSORT(A, lo, p);
		D_QSORT(A, p + 1, hi);
	}
}

//D_PART, used by quicksort algorithm.
template <typename L_Type, typename I_Type>
I_Type* D_PART(L_Type A, I_Type* lo, I_Type* hi, int len) {
	I_Type pivot = *(lo + (rand() % len));
	I_Type* i = lo - 1;
	I_Type* j = hi + 1;
	while (true)
	{
		do
		{
			i++;
		} while (*i > pivot);
		do
		{
			j--;
		} while (*j < pivot);
		if (i >= j)
		{
			return j;
		}
		std::swap(*i, *j);
	}
}

#endif
