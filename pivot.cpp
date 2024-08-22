#include <iostream>
#include "pivot.h"

void quick_sort(int* arr, int size)
{

    //��������� � ������ � � ����� �������
    int i = 0;
    int j = size - 1;

    //����������� ������� �������
    int mid = arr[size / 2];

    //����� ������
    do
    {
        //��������� ��������, ���� ��, ������� ����� ���������� � ������ �����
        //� ����� ����� ������� ����������(��������� �� �����) ��������, ������� ������ ������������
        while (arr[i] < mid) {
            i++;
        }
        //� ������ ����� ���������� ��������, ������� ������ ������������
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


    //����������� ������, ���� ��������, ��� �����������
    if (j > 0)
    {
        //����� �����
        quick_sort(arr, j + 1);
    }
    if (i < size) {
        //������ �����
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