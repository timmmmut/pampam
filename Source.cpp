#include <iostream>
#include <ctime>
using namespace std;
void srArifmPlus(int size) {
	srand(time(0));
	int* mas = new int[size];
	double sum = 0;
	int g = 0;
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 21 -10;
		cout << mas[i]<< ' ';
		cout << endl;
	}
	for (int i = 0; i < size; i++) {
		if (mas[i] > 0) {
			sum = sum + mas[i];
			g++;
		}
	}
	cout << endl;
	cout << sum / g;
}
