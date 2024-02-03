// zad1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include <fstream>
#include <string>   
#include <vector>
#include "Header.h"

#define z 1
#define t 2
#define y t+z
#define x1 (8*pow(z,2)+1)/(y+pow(t,2))
#define b (y1-z1/y1-x)/(cos(x)+pow(y1-x,2))
#define x 1.82
#define y1 1.25
using namespace std;

//double massiv(int mas[], int n) {
//    double sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += mas[i];
//    }
//    return sum / n;
//}
//
//double massiv(float mas[], int n) {
//    double sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += mas[i];
//    }
//    return sum / n;
//}
//
//double massiv(double mas[], int n) {
//    double sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += mas[i];
//    }
//    return sum / n;
//}

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int zad;
        double alp;
        cout << "Введите номер задания" << endl;
        cin >> zad;
        if (zad == 1)
        {
            cout << "x= " << x1<<endl;
        }
        if (zad == 2)
        {
           // double x = 1.82;
           // double y1= 1.25;
            double z1 = (sqrt(15 * y1)) / (y1 + 1 / tan(x));
            cout << "b= " << b<<endl;
        }
        if (zad == 3)
        {
            cout << "Введите значение угла" << endl;
            cin >> alp;
            double y2 = cos(alp) + sin(alp) + cos(3 * alp) + sin(3 * alp);
            cout << "y= " << y2<<endl;

        }
        if (zad == 4)
        {
            int a, b1, c;
            int otv;
            cout << "выберите действие:\n1.запись в файл\n2.чтение из файла" << endl;
            cin >> otv;
            if (otv == 1)
            {
                ofstream oFile("file.txt");
                cout << "введите значение а" << endl;
                cin >> a;
                cout << "введите значение b" << endl;
                cin >> b1;
                cout << "введите значение c" << endl;
                cin >> c;
                oFile << a<<" " << b1<<" " << c;
                cout << "Данные записаны в файл" << endl;
                cout << " " << endl;
                oFile.close();
            }
            if (otv == 2)
            {
               /* string myFile;
                ifstream MyReadFile("file.txt");
                while (getline(MyReadFile, myFile)) {
                    // вывод текста из файла
                    cout << myFile<<endl;
                    myFile[0] = a;
                    cout << a;
                }

                // Закрытие файла
                MyReadFile.close();*/

                ifstream oFile("file.txt");
                int ch;//считывание чисел из файла
                int Count = 0;
                while (oFile >> ch)
                    Count++;
               // cout << "Чисел в файле : " << Count << endl;
                cout << " " << endl;
                oFile.close();
                double r;
                int* mass = new int[Count];
                ifstream file("file.txt");
                for (int i = 0; i < Count; i++) {
                    file >> mass[i];
                    cout << mass[i] << endl;
                    r = sqrt(pow(mass[0], 2) + pow(mass[1], 2) + pow(mass[2], 2));
                }
                cout << "R= " << r << endl;

           }
        }
        if (zad == 5)
        {
            int masInt[] = { 1, 2, 3, 4, 5 };
            cout << "Среднее арифметическое массива типа int: " << massiv(masInt, 5) << endl;
            float masFloat[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
            cout << "Среднее арифметическое массива типа float: " << massiv(masFloat, 5) << endl;
            double masDouble[] = { 1.15, 2.25, 3.35, 4.45, 5.55 };
            cout << "Среднее арифметическое массива типа double: " << massiv(masDouble, 5) << endl;

        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
