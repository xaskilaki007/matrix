//5. В квадратной матрице для каждой строки найти минимальный элемент и
//переставить его с элементом, стоящим в этой строке на главной диагонали.
#include <iostream>
#include <array>
#include <time.h>
#define N 5
using namespace std;
int main(){
    int minim,gl,m;
    srand(time(0));

    std::array<std::array<int, N>, N>mat;
    for(int T=0;T<N;T++){
        for(int U=0;U<N;U++){
            mat[T][U]=rand()%50;
        }
    }
    for (int T=0;T<N;T++){
        for(int U=0;U<N;U++){
            cout<<mat[T][U]<<" ";
        }
        cout<<endl;

    }
    cout << "///////////////////////////////////" << endl;
    for(int T=0;T<N;T++){
        minim=mat[T][0];
        N=0;
        for(int U=0;U<N;U++){
            if(minim>mat[T][U]){
                minim=mat[T][U];
                m=U;
            }

        }
            mat[T][m]=mat[T][T];
            mat[T][T]=minim;
    }

    for (int T=0;T<N;T++){
        for(int U=0;U<N;U++){
            cout<<mat[T][U]<<" ";

        }
        cout<<endl;
    }
    return 0;
}
