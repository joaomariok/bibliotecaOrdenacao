// bibliotecaOrdenacao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "AlgoritmosOrdenacao.h"

using namespace std;

int main()
{
	// INT
	int vet[] = { 13, 72, 15, 25, 4, 345, 34, 42, 346, 2, 65, 234, 6, 234, 6, 236 };
	int tam = sizeof(vet) / sizeof(int);

	// DOUBLE
	//double vet[] = { 0.2, 0.2, 0.15, 22.6, 1, 22.6, 50.9, 0.1, -0.6 };
	//int tam = sizeof(vet) / sizeof(double);

	// STRING
	//string vet[] = { "victor", "bosta", "victor", "yago", "vacilao", "joao", "bundao" };
	//int tam = sizeof(vet) / sizeof(*vet);

	AlgoritmosOrdenacao ord;
	ord.selectionSort(vet, tam);

	for (int i = 0; i < tam; i++) {
		cout << vet[i] << " ";
	}
	cout << endl;

	return 0;
}