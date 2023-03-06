//2. Преобразовать матрицу, умножив элементы каждой строки на значение второгоэлемента этой строки
#include <iostream>
#include <array>
#include <time.h>
int main(){
    int y;
    srand(time(0));
    std::array <std::array <int, 7>, 7> Matrix;
    for(int i = 0; i <= 6; i++){
        for(int q = 0; q <= 6; q++){
            Matrix[i][q] = rand()%70;
            if(Matrix[i][q] < 10){
                std::cout << Matrix[i][q] << " " << " ";
            }
            if(Matrix[i][q] > 9){
                std::cout << Matrix[i][q] << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;



    for(int i = 0; i <= 6; i++){
       y = Matrix[i][1];
        for(int q = 0; q <= 6; q++){
             Matrix[i][q] = y * Matrix[i][q];
        }
    }

    for(int i = 0; i <= 6; i++){
        for(int q = 0; q <= 6; q++){
            if((Matrix[i][q] < 10000) && (Matrix[i][q] > 999)){
                std::cout << Matrix[i][q] << " ";
            }

            if((Matrix[i][q] < 1000) && (Matrix[i][q] > 99)){
                std::cout << Matrix[i][q] << " " << " ";
            }

            if((Matrix[i][q] < 100) && (Matrix[i][q] > 9)){
                std::cout << Matrix[i][q] << " " << " " << " ";
            }

            if(Matrix[i][q] < 10){
                std::cout << Matrix[i][q] << " " << " " << " " << " ";
            }
        }
          std::cout << std::endl;
        }
    std::cout << std::endl;
    return 0;
}
