/**
 * 9. Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
a. Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель
характеризуется яркостью цветовых каналов: красный, синий, зелёный.
*/

#include <iostream>
#include<array>
#include<ctime>

const int width = 5;
const int height = 5;

struct Pixels
{
    int r, g, b;
};

void FillMatrix(std::array<std::array<Pixels, width>, height>& pic)
{
    for (int i = 0; i < width; i++)
        for (int j = 0; j < height; j++) {
            pic[i][j].r = rand() % 255;
            pic[i][j].g = rand() % 255;
            pic[i][j].b = rand() % 255;
        }


}

int main()
{
    srand(time(0));
    std::array<std::array<Pixels, width>, height> matrix;

    FillMatrix(matrix);
    int i = 10, j = 10;
    for(int i = 0; i < width; i++)
        for(int j=0; j < height; j++)
        { 
            std::cout << "Info of pixel[" << i << "][" << j << "]" << std::endl;
            std::cout << "\t r: " << matrix[i][j].r << std::endl;
            std::cout << "\t g: " << matrix[i][j].g << std::endl;
            std::cout << "\t b: " << matrix[i][j].b << std::endl;
        }



    return 0;
}
