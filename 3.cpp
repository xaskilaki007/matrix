//В квадратной матрице, найти сумму
//отрицательных элементов, лежащих на главной диагонали.
#include <iostream>
#include <array>
#include <time.h>
#define N 5
using namespace std;
int main() {
	int A[N][N],sum1;
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = rand() % 60-30;
			
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}	cout << "//////////";
	sum1 = 0;
	for (int i = 0; i < N; i++){
		if (A[i][i] < 0) sum1 += A[i][i];
	}
	cout << sum1;
		
}
