#include <iostream>
#include <ctime>
#include "Header.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE];
	srand(time(0));
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << " ";
	}
	cout << endl;
	int sumEl;
	sumEl = SummaElMas(arr, SIZE);
	cout << sumEl << endl;
}