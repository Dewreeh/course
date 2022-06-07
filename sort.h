
#if !defined(_SORT_H_)
#define _SORT_H_


#define BUBBLE 1
#define COMB_SORT 2
#define SHELL_SORT 3
#define QUICKSORT 4
#define MERGESORT 5
#define HEAPSORT 6
#define INCREASE 1
#define DECREASE -1



int compare_int(void* a, void* b);
int compare_double(void* a, void* b);
void bubble(void* array, int len_a, int elemsize, int(*comp)(void*a1, void*a2), int SORT_DIRECTION);
void comb_sort(void* array, int len_a, int elemsize, int(*comp)(void*a1, void*a2), int SORT_DIRECTION);
int sort(void*array, int size, int elemsize, int SORT_DIRECTION, int SORT_METHOD, int(compare)(void*a1, void*a2));
void shell_h1(void*a, int len_a, int elemsize, int(comp)(void*,void*), int SORT_DIRECTION);
void quicksort(void* array, int len_a, int elemsize, int(*comp)(void*a1, void*a2), int SORT_DIRECTION);
void mergesort(void* array, int len_a, int elemsize, int(*comp)(void*a1, void*a2), int SORT_DIRECTION);
void heapsort(void* array, int len_a, int elemsize, int(*comp)(void*a1, void*a2), int SORT_DIRECTION);
void move(void*a, void*b, int elemsize);
int partition(void* arr, int len_a, int elemsize, int(comp)(void*,void*), int SORT_DIRECTION);
#endif
