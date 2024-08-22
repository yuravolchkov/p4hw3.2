#include <iostream>
#include "pivot.h"

void quick_sort(int* arr, int size)
{

    //Указатели в начало и в конец массива
    int i = 0;
    int j = size - 1;

    //Центральный элемент массива
    int mid = arr[size / 2];

    //Делим массив
    do
    {
        //Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
        //В левой части массива пропускаем(оставляем на месте) элементы, которые меньше центрального
        while (arr[i] < mid) {
            i++;
        }
        //В правой части пропускаем элементы, которые больше центрального
        while (arr[j] > mid) {
            j--;
        }

        if (i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);


    //Рекурсивные вызовы, если осталось, что сортировать
    if (j > 0)
    {
        //левая часть
        quick_sort(arr, j + 1);
    }
    if (i < size) {
        //правая часть
        quick_sort(&arr[i], size - i);
    }
}

void print_array(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (i + 1 < size)
        {
            std::cout << " ";
        }

    }
}