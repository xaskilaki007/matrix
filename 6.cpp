//6. Одна строка содержит: Х,У,Команда,
//где ХУ – координаты, а Команда – это набор чисел, характеризующих
//действие коптера: 10 – взлёт, 20 – посадка, 50 – полёт, 60 – набрать
//высоту, 70 снизить высоту. Каждая новая строка содержит
//новый набор координат и команд. Организовать переменные для хранения информации.
#include <iostream>
#include <fstream>
#include <string>
#define N 5
using namespace std;
struct Copter
{
    double X,Y;
    int course;
};
int main() {
    fstream f;
    f.open("1.txt", fstream::in);
    Copter st[100];
    int n = 0;
    string s;
    char c;
    if (!f.is_open())
    {
        cout << "File not open! Error!!!";
        return 0;
    }

    while (!f.eof())
    {
        f >> st[n].X;
        f >> st[n].Y;
        f >> st[n].course;
        n++;
        cout << endl;
    }
    f.close();
    fstream f2;
    f2.open("2.txt", fstream::out);
    for (int i = 0; i < n; i++)
    {
        f2 << st[i].X << endl << st[i].Y << endl << st[i].course << endl;
    }
    f2.close();
}
