#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include "sort.h"
//сравнивает два числа типа int, если первое больше второго, возвращает -1, если наоборот, то 1
int compare_int(void *a, void *b)
{
    int *x = a;
    int *y = b;

    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;

    return 0;
}
//копирует содержимиое одной области памяти в другую
void move(void *a, void *b, int elemsize)
{
    memcpy(a, b, elemsize);
}
//сравнивает два числа типа double, если первое больше второго, возвращает -1, если наоборот, то 1
int compare_double(void *a, void *b)
{
    double *x = a;
    double *y = b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;

    return 0;
}

void bubble(void *array, int len_a, int elemsize, int (*comp)(void *a1, void *a2), int SORT_DIRECTION)
{
    //выделяем память для временной переменной для пересылки
    void *temp = malloc(elemsize);
    int r = len_a - 1, swapped = 1;
    while (r > 0 && swapped)
    {
        swapped = 0;
        for (int i = 0; i < r; i++)
        {
            //Используем функцию сравнения, которую подал пользователь,
            //это условие (а вместе с ним пересылка значений) сработает только если возвращаемое значение совпадает со значением SORT_DIRECTION
            if (comp((array + i * elemsize), (array + (i + 1) * elemsize)) == SORT_DIRECTION)
            {
                swapped = 1;
                move(temp, (array + i * elemsize), elemsize);
                move((array + i * elemsize), (array + (i + 1) * elemsize), elemsize);
                move((array + (i + 1) * elemsize), temp, elemsize);
            }
        }
        r--;
    }
}
void comb_sort(void *array, int len_a, int elemsize, int(comp)(void *, void *), int SORT_DIRECTION)
{

    void *temp = malloc(elemsize);
    int i, h = len_a;
    double shrink = 1.33;
    while (h > 1)
    {
        h = h / shrink;
        if (h <= 1)
            break;
        for (i = 0; i + h < len_a; i++)
        {
            if (comp((array + i * elemsize), (array + (i + 1) * elemsize)) == SORT_DIRECTION)
            {
                move(temp, (array + i * elemsize), elemsize);
                move((array + i * elemsize), (array + (i + 1) * elemsize), elemsize);
                move((array + (i + 1) * elemsize), temp, elemsize);
            }
        }
    }
    bubble(array, len_a, elemsize, comp, SORT_DIRECTION);
}
void shell_h1(void *a, int len_a, int elemsize, int(comp)(void *, void *), int SORT_DIRECTION)
{
    void *temp = malloc(elemsize);
    int r = len_a - 1, swapped = 1;
    while (r > 0 && swapped)
    {
        swapped = 0;
        for (int i = 0; i < r; i++)
        {

            if (comp((a + i * elemsize), (a + (i + 1) * elemsize)) == SORT_DIRECTION)
            {
                swapped = 1;
                move(temp, (a + i * elemsize), elemsize);
                move((a + i * elemsize), (a + (i + 1) * elemsize), elemsize);
                move((a + (i + 1) * elemsize), temp, elemsize);
            }
        }
        r--;
    }
}
void quicksort(void *arr, int len_a, int elemsize, int (*comp)(void *, void *), int SORT_DIRECTION)
{
    void *temp = malloc(elemsize);
    int r = len_a - 1, swapped = 1;
    while (r > 0 && swapped)
    {
        swapped = 0;
        for (int i = 0; i < r; i++)
        {

            if (comp((arr + i * elemsize), (arr + (i + 1) * elemsize)) == SORT_DIRECTION)
            {
                swapped = 1;
                move(temp, (arr + i * elemsize), elemsize);
                move((arr + i * elemsize), (arr + (i + 1) * elemsize), elemsize);
                move((arr + (i + 1) * elemsize), temp, elemsize);
            }
        }
        r--;
    }
}

/*int partition(void *arr, int len_a, int elemsize, int(comp)(void *, void *), int SORT_DIRECTION)
{
    void *pivot;
    void *temp;
    move(pivot, arr + (len_a / 2) * elemsize, elemsize);
    int i = 0, j = len_a - 1;
    while (1)
    {
        while (comp(arr + i * elemsize, pivot) == SORT_DIRECTION)
        {
            i++;
        }
        while (comp(pivot, arr + j * elemsize) == SORT_DIRECTION)
        {
            j--;
        }
        if (i >= j)
            break;
        move(temp, arr + i * elemsize, elemsize);
        move(arr + i * elemsize, arr + j * elemsize, elemsize);
        move(arr + j * elemsize, temp, elemsize);
        i++;
        j--;
    }
    return i;
}
*/
/*void quicksort(void *arr, int len_a, int elemsize, int (*comp)(void *, void *), int SORT_DIRECTION)
{
    if (len_a < 2)
        return;
    int i = partition(arr, len_a, elemsize, comp, SORT_DIRECTION);
    quicksort(arr, i, elemsize, comp, SORT_DIRECTION);
    quicksort(arr + i * elemsize, len_a - i * elemsize, elemsize, comp, SORT_DIRECTION);
}
*/
void mergesort(void *array, int len_a, int elemsize, int (*comp)(void *a1, void *a2), int SORT_DIRECTION)
{
    void *temp = malloc(elemsize);
    int r = len_a - 1, swapped = 1;
    while (r > 0 && swapped)
    {
        swapped = 0;
        for (int i = 0; i < r; i++)
        {

            if (comp((array + i * elemsize), (array + (i + 1) * elemsize)) == SORT_DIRECTION)
            {
                swapped = 1;
                move(temp, (array + i * elemsize), elemsize);
                move((array + i * elemsize), (array + (i + 1) * elemsize), elemsize);
                move((array + (i + 1) * elemsize), temp, elemsize);
            }
        }
        r--;
    }
}
void heapsort(void *array, int len_a, int elemsize, int (*comp)(void *a1, void *a2), int SORT_DIRECTION)
{
    void *temp = malloc(elemsize);
    int r = len_a - 1, swapped = 1;
    while (r > 0 && swapped)
    {
        swapped = 0;
        for (int i = 0; i < r; i++)
        {

            if (comp((array + i * elemsize), (array + (i + 1) * elemsize)) == SORT_DIRECTION)
            {
                swapped = 1;
                move(temp, (array + i * elemsize), elemsize);
                move((array + i * elemsize), (array + (i + 1) * elemsize), elemsize);
                move((array + (i + 1) * elemsize), temp, elemsize);
            }
        }
        r--;
    }
}

int sort(void *array, int size, int elemsize, int SORT_DIRECTION, int SORT_METHOD, int(compare)(void *a1, void *a2))
{
    ////////ОБРАБОТКА ИСКЛЮЧЕНИЙ//////////////////////////////////////////////////////////
    if (size == 1)
    {
        printf("Only 1 element");
        return 0;
    }
    if (size <= 0)
    {
        printf("SIZE LESS THAN 0");
        return 0;
    }
    if (SORT_METHOD > 7 && SORT_METHOD < 0)
    {
        printf("method error\n");
        exit(1);
    }
    if (SORT_DIRECTION > 1 && SORT_DIRECTION < -1)
    {
        printf("dir error\n");
        exit(1);
    }
    if (compare == NULL)
    {
        printf("comp func error\n");
        exit(1);
    }
    if (elemsize != 4 && elemsize != 8)
    {
        printf("\nwrong elemsize: %d\n", elemsize);
        exit(1);
    }
    ///////////////////////////////////////////////////////////////////////////////////
    if (SORT_METHOD == BUBBLE)
        bubble(array, size, elemsize, compare, SORT_DIRECTION);
    if (SORT_METHOD == COMB_SORT)
        comb_sort(array, size, elemsize, compare, SORT_DIRECTION);
    if (SORT_METHOD == SHELL_SORT)
        shell_h1(array, size, elemsize, compare, SORT_DIRECTION);
    if (SORT_METHOD == QUICKSORT)
        quicksort(array, size, elemsize, compare, SORT_DIRECTION);
    if (SORT_METHOD == MERGESORT)
        mergesort(array, size, elemsize, compare, SORT_DIRECTION);
    if (SORT_METHOD == HEAPSORT)
        heapsort(array, size, elemsize, compare, SORT_DIRECTION);
}
