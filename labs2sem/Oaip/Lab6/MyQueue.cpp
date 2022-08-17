#include "MyQueue.h"
#include <iostream>

void create(Queue** begin, Queue** end, int p) //Формирование элементов очереди
{
    Queue* t = new Queue;
    t->next = NULL;
    if (*begin == NULL)
        *begin = *end = t;
    else
    {
        t->num = p;
        (*end)->next = t;
        *end = t;
    }
}

void view(Queue* begin) //Вывод элементов очереди 
{
    Queue* t = begin;
    if (t == NULL)
    {
        std::cout << "\nЭлементы очереди отсутствуют\n";
        return;
    }
    else
        while (t != NULL)
        {
            std::cout << t->num << " ";
            t = t->next;
        }
}

void Del(Queue** begin, Queue** p) //Удаление до минимального элемента 
{
    Queue* t;
    t = new Queue;
    while (*begin != *p)
    {
        t = *begin;
        *begin = (*begin)->next;
        delete t;
    }
}


Queue *Elem(Queue* begin, char ch) //Определение элемента
{
    Queue* t = begin, *mn;
    mn = NULL;
    if (t == NULL)
    {
        std::cout << "Очередь пуста\n"; return 0;
    }
    else
    {

        while (t != NULL)
        {
            if (t->num == ch)
            {
                mn = t;
            }
            t = t->next;
        }
    }
    return mn;
}



