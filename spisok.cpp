// The first lab of OOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Компьютерная игра
/* 1.Проверка на наличие элементов в структуре,
   2.получение количества элементов в структуре,
   3.добавление элементов в структуру,
   4.вставка элемента в структуру после текущего
   5.удаление текущего элемента структуры данных
   6.очистка структуры
   7.перемещение по элементам структуры
   8.чтение информации из текущего элемента структуры данных */

//#include <StdAfx.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale>
#include <windows.h>
#include "game.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Эта программа была сделана Андреем Романовым из ИВТ-21 \n";
    cout << "Программа представляет собой односвязный список, который должен выполнять функции, предложенные ниже \n";

    cout << "Вы желаете создать структуру?(y - да, n - нет)" << endl;
    string ans;
    cin >> ans;
    if(ans == "y")
    {

            class spisok* list = new spisok;
            list->initStruct();
            menu();
            int choice;
            cin >> choice;
            while (choice != 9)
            {
                switch (choice)
                {
                case 1:
                {
                    list->checkStruct();
                    break;
                }
                case 2:
                {
                    cout << "Количество элементов в структуре данных: " << list->amount() << endl;
                    break;
                }
                case 3:
                {
                    list->append();
                    break;
                }
                case 4:
                {
                    list->insert();
                    break;
                }
                case 5:
                {
                    list->deleteElem();
                    break;
                }
                case 6:
                {
                    list->deleteAll();
                    break;
                }
                case 7:
                {
                    list->changePosition();
                    break;
                }
                case 8:
                {
                    list->getInfo();
                    break;
                }
                }
                menu();
                cin >> choice;
            }
    }
    else { cout << "В таком случае програма закрывается" << endl; exit(0); }
    system("PAUSE");
}




