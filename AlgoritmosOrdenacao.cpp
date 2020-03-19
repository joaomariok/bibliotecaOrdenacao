#include <iostream>
#include <string>
#include "AlgoritmosOrdenacao.h"

using namespace std;

// Construtor para a classe
AlgoritmosOrdenacao::AlgoritmosOrdenacao()
{
	// construtor
}

//// BUBBLESORT:

// Bubblesort para int
void AlgoritmosOrdenacao::bubbleSort(int vet[], int tam)
{
	int aux = 0;
	for (int k = tam-1; k > 0; --k)
	{
		for (int j = 0; j < k; ++j)
		{
			if (vet[j] > vet[j + 1])
			{
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

// Bubblesort para double
void AlgoritmosOrdenacao::bubbleSort(double vet[], int tam)
{
	double aux = 0.0;
	for (int k = tam - 1; k > 0; --k)
	{
		for (int j = 0; j < k; ++j)
		{
			if (vet[j] > vet[j + 1])
			{
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

// Bubblesort para string
void AlgoritmosOrdenacao::bubbleSort(string vet[], int tam)
{
	string aux = "";
	for (int k = tam - 1; k > 0; --k)
	{
		for (int j = 0; j < k; ++j)
		{
			if (vet[j] > vet[j + 1])
			{
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

//// SELECTIONSORT:

// Selectionsort para int
void AlgoritmosOrdenacao::selectionSort(int vet[], int tam)
{
	int min, aux;

	// One by one move boundary of unsorted subarray  
	for (int i = 0; i < tam - 1; ++i)
	{
		// Find the minimum element in unsorted array  
		min = i;
		for (int j = i + 1; j < tam; ++j)
			if (vet[j] < vet[min])
				min = j;

		// Swap the found minimum element with the first element  
		aux = vet[i];
		vet[i] = vet[min];
		vet[min] = aux;
	}
}

// Selectionsort para double
void AlgoritmosOrdenacao::selectionSort(double vet[], int tam)
{
	int min;
	double aux;

	// One by one move boundary of unsorted subarray  
	for (int i = 0; i < tam - 1; ++i)
	{
		// Find the minimum element in unsorted array  
		min = i;
		for (int j = i + 1; j < tam; ++j)
			if (vet[j] < vet[min])
				min = j;

		// Swap the found minimum element with the first element  
		aux = vet[i];
		vet[i] = vet[min];
		vet[min] = aux;
	}
}

// Selectionsort para string
void AlgoritmosOrdenacao::selectionSort(string vet[], int tam)
{
	int min;
	string aux;

	// One by one move boundary of unsorted subarray  
	for (int i = 0; i < tam - 1; ++i)
	{
		// Find the minimum element in unsorted array  
		min = i;
		for (int j = i + 1; j < tam; ++j)
			if (vet[j] < vet[min])
				min = j;

		// Swap the found minimum element with the first element  
		aux = vet[i];
		vet[i] = vet[min];
		vet[min] = aux;
	}
}

//// INSERTIONSORT:

// Insertionsort para int
void AlgoritmosOrdenacao::insertionSort(int vet[], int tam)
{
}

// Insertionsort para double
void AlgoritmosOrdenacao::insertionSort(double vet[], int tam)
{
}

// Insertionsort para string
void AlgoritmosOrdenacao::insertionSort(string vet[], int tam)
{
}
