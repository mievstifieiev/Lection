// Lecture_Imitation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#include "Human.h"
#include "Room.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{
    Human** lesson;
    cout << "Enter the teacher's name: ";
    string name;
    cin >> name;
    cout << endl;
    Teacher* teach = new Teacher(name);
    cout << "Enter the number of students: ";
    int n;
    cin >> n;
    cout << endl;
    lesson = new Human*[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the student's name: ";
        cin >> name;
        cout << endl;
        lesson[i] = new Student(name);
    }
    cout << "The lecture began" << endl;
    bool end_lecture = 1;
    Room* room = new Room(lesson);
    while (end_lecture)
    {
        teach->Speak(room);
        cout << "Continue the lecture? (1/0): ";
        int anser;
        cin >> anser;
        cout << endl;
        if (anser == 0)
        {
            end_lecture = 0;
        }
        else if (anser == 1)
        {
            end_lecture = 1;
        }
        
    }
    delete[] room;
    delete[] teach;
    delete[] lesson;
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
