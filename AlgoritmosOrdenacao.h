#pragma once
#include <string>

using namespace std;

class AlgoritmosOrdenacao
{
public:
	AlgoritmosOrdenacao();

	void bubbleSort(int vet[], int tam);
	void bubbleSort(double vet[], int tam);
	void bubbleSort(string vet[], int tam);

	void selectionSort(int vet[], int tam);
	void selectionSort(double vet[], int tam);
	void selectionSort(string vet[], int tam);

	void insertionSort(int vet[], int tam);
	void insertionSort(double vet[], int tam);
	void insertionSort(string vet[], int tam);

protected:

private:
};

