//10. Реализовать вычисление матричных норм из
//списка выше (только для квадратных матриц).
//5. В квадратной матрице для каждой строки найти минимальный элемент и
//переставить его с элементом, стоящим в этой строке на главной диагонали.
#include <iostream>
#include <array>
#include <time.h>
using namespace std;
int main(){
    int minim,gl,m;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    for(int T=0;T<5;T++){
        for(int U=0;U<5;U++){
            mat[T][U]=rand()%50;
        }
    }
    for (int T=0;T<5;T++){
        for(int U=0;U<5;U++){
            cout<<mat[T][U]<<" ";
        cout<<endl;
        }
    }
    for(int T=0;T<5;T++){
        minim=mat[T][0];
        for(int U=0;U<5;U++){
            if(minim>mat[T][U]){
                minim=mat[T][U];
                m=U;
            }
        if (T==U)
            gl=mat[T][U];
        }
            mat[T][m]=gl;
            mat[T][T]=minim;
    }
    for (int T=0;T<5;T++){
        for(int U=0;U<5;U++){
            cout<<mat[T][U]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
