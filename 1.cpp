//Преобразовать матрицу : элементы строки, в которой
//находится минимальный элемент матрицы, заменить нулями.
#include <iostream>
#include <array>
#include <time.h>
#define N 5
using namespace std;
int main() {
	int A[N][N],min1,num;
	min1 = 10000;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = rand() % 30;
			if (A[i][j] < min1) {
				min1 = A[i][j];
				num = i;
					cout << "Nomer:" << num << "Minimalnii element:" << min1 << endl;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}cout << "//////////////" <<endl;
	for (int i = 0; i < N; i++) {
		A[num][i] = 0;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

}
