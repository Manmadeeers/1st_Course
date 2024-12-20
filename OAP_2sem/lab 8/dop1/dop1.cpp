﻿#include<iostream>
using namespace std;
struct Item
{
    int data;
    Item* next;
};
Item* head = nullptr;
Item* tail = nullptr;
bool isNull() //Проверка на пустоту
{
    return (head == nullptr);
}
void deletFirst() //Извлечение элемента из начала
{
    if (isNull())
        cout << "Очередь пуста" << endl;
    else
    {
        Item* p = head;
        head = head->next;
        delete p;
    }
}
void getFromHead() //Получение элемента из начала
{
    if (isNull())
        cout << "Очередь пуста" << endl;
    else
        cout << "Начало = " << head->data << endl;
}
void insertToQueue(int x) //Добавление элемента в очередь 
{
    Item* p = new Item; //новый указатель 
    p->data = x;
    p->next = nullptr;
    Item* v = new Item; //указатель для нового числа
    Item* p1 = new Item;
    Item* p2 = new Item;
    int i = 0;               //флажок
    if (isNull())
        head = tail = p;
    else
    {
        p2 = head; p1 = head;
        while (p1 != NULL)
        {
            if (i == 1)
            {
                if (x <= p1->data)
                {
                    v->data = x;
                    v->next = p1;
                    p2->next = v;
                    return;
                }
                p2 = p2->next;
            }
            else
            {
                if (x <= p1->data)
                {
                    v->data = x;
                    v->next = p1;
                    head = v;
                    return;
                }
            }
            p1 = p1->next;
            i = 1;
        }
        if (p1 == nullptr)
        {
            tail->next = p;
            tail = p;
        }
    }
}
void printQueue()
{
    Item* p = new Item;
    if (isNull())
        cout << "Очередь пуста" << endl;
    else
    {
        cout << "Очередь = ";
        p = head;
        while (!isNull())
        {
            if (p != nullptr)
            {
                cout << p->data << " ";
                cout << "->";
                p = p->next;
            }
            else
            {
                cout << "NULL" << endl;
                return;
            }
        }
    }
}
void clrQueue()
{
    while (!isNull()) deletFirst();
}
void insertToPriorityQueue(int x, bool isFIFO)
{
    if (isNull() || x >= head->data)
    {
        insertToQueue(x);
    }
    else
    {
        Item* p = new Item;
        p->data = x;
        p->next = head;
        head = p;
    }
    if (!isFIFO)
    {
        Item* p = head;
        while (p->next->next != nullptr)
        {
            p = p->next;
        }
        delete p->next;
        p->next = nullptr;
    }
}
void getFromPriorityQueue(bool isFIFO)
{
    if (isNull())
        cout << "Очередь пуста" << endl;
    else
    {
        if (isFIFO)
            getFromHead();
        else
        {
            Item* p = head;
            while (p->next != nullptr)
            {
                p = p->next;
            }
            cout << "Начало = " << p->data << endl;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    int i = 1, choice = 1, z; head = nullptr; tail = nullptr;
    while (choice != 0)
    {
        cin >> choice;
        cout << "1 - добавить элемент" << endl;
        cout << "2 - получить элемент с начала" << endl;
        cout << "3 - извлечь элемент с начала" << endl;
        cout << "4 - вывести элементы" << endl;
        cout << "5 - очистить очередь" << endl;
        cout << "6 - добавить элемент в приоритетную очередь (LIFO)" << endl;
        cout << "7 - получить элемент из приоритетной очереди (LIFO)" << endl;
        cout << "8 - добавить элемент в приоритетную очередь (FIFO)" << endl;
        cout << "9 - получить элемент из приоритетной очереди (FIFO)" << endl;
        cout << "0 - выход" << endl;
        switch (choice)
        {
        case 1: cout << "Введите элемент: ";
            cin >> z;
            insertToQueue(z);
            printQueue();
            break;
        case 2:
            getFromHead();
            break;
        case 3:
            deletFirst();
            break;
        case 4:
            printQueue();
            break;
        case 5:
            clrQueue();
            break;
        case 6:
            cout << "Введите элемент: ";
            cin >> z;
            insertToPriorityQueue(z, true);
            printQueue();
            break;
        case 7:
            getFromPriorityQueue(true);
            break;
        case 8:
            cout << "Введите элемент: ";
            cin >> z;
            insertToPriorityQueue(z, false);
            printQueue();
            break;
        case 9:
            getFromPriorityQueue(false);
            break;
        }
    }
    return 0;
}