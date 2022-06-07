#include<stdio.h>
#include<stdlib.h>
#include"sort.h"
//функция для генерации случайных вещественных чисел
double frand(double fMin, double fMax){
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

void test(){
    int flag_if_wrong = 0;
    int N = 1000;
    //int *test_array_int  = malloc(sizeof(int)*N);
    //double *test_array_double = malloc(sizeof(double)*N);
    int test_array_int[1000];
    double test_array_double[1000];
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);
    }

    sort(test_array_int, N, sizeof(int), INCREASE, BUBBLE, compare_int);
    sort(test_array_double, N, sizeof(double), INCREASE, BUBBLE, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] > test_array_int[i+1] || test_array_double[i] > test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }
    }
    if (flag_if_wrong == 0) printf("BUBBLE INCREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("BUBBLE INCREASE ERROR\n");
/////////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);


    }
    sort(test_array_int, N, sizeof(int), DECREASE, BUBBLE, compare_int);
    sort(test_array_double, N, sizeof(double), DECREASE, BUBBLE, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] < test_array_int[i+1] || test_array_double[i] < test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }           
    }
    if (flag_if_wrong == 0) printf("BUBBLE DECREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("BUBBLE DECREASE ERROR\n");
/////////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);
    }

    sort(test_array_int, N, sizeof(int), INCREASE, COMB_SORT, compare_int);
    sort(test_array_double, N, sizeof(double), INCREASE, COMB_SORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] > test_array_int[i+1] || test_array_double[i] > test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }
    }
    if (flag_if_wrong == 0) printf("COMBSORT INCREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("COMBSORT INCREASE ERROR\n");
/////////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);


    }
    sort(test_array_int, N, sizeof(int), DECREASE, COMB_SORT, compare_int);
    sort(test_array_double, N, sizeof(double), DECREASE, COMB_SORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] < test_array_int[i+1] || test_array_double[i] < test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }           
    }
    if (flag_if_wrong == 0) printf("COMBSORT DECREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("COMBSORT DECREASE ERROR\n");  
//////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);
    }

    sort(test_array_int, N, sizeof(int), INCREASE, SHELL_SORT, compare_int);
    sort(test_array_double, N, sizeof(double), INCREASE, SHELL_SORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] > test_array_int[i+1] || test_array_double[i] > test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }
    }
    if (flag_if_wrong == 0) printf("SHELLSORT INCREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("SHELLSORT INCREASE ERROR\n");
/////////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);


    }
    sort(test_array_int, N, sizeof(int), DECREASE, SHELL_SORT, compare_int);
    sort(test_array_double, N, sizeof(double), DECREASE, SHELL_SORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] < test_array_int[i+1] || test_array_double[i] < test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }           
    }
    if (flag_if_wrong == 0) printf("SHELLSORT DECREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("COMBSORT DECREASE ERROR\n");
/////////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);
    }

    sort(test_array_int, N, sizeof(int), INCREASE, QUICKSORT, compare_int);
    sort(test_array_double, N, sizeof(double), INCREASE, QUICKSORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] > test_array_int[i+1] || test_array_double[i] > test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }
    }
    if (flag_if_wrong == 0) printf("QUICK INCREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("QUICK INCREASE ERROR\n");
/////////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);


    }
    sort(test_array_int, N, sizeof(int), DECREASE, QUICKSORT, compare_int);
    sort(test_array_double, N, sizeof(double), DECREASE, QUICKSORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] < test_array_int[i+1] || test_array_double[i] < test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }           
    }
    if (flag_if_wrong == 0) printf("QUICK DECREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("QUICK DECREASE ERROR\n");
//////////////////////////////////////////////
    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);


    }
    sort(test_array_int, N, sizeof(int), INCREASE, MERGESORT, compare_int);
    sort(test_array_double, N, sizeof(double), INCREASE, MERGESORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] > test_array_int[i+1] || test_array_double[i] > test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }           
    }
    if (flag_if_wrong == 0) printf("MERGE INCREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("MERGE INCREASE ERROR\n");

    for(int i = 0; i < N; i++){
        test_array_int[i] = rand();
        test_array_double[i] = frand(0.0, 1000.0);


    }
    ///////////////////////////////////////
    sort(test_array_int, N, sizeof(int), DECREASE, MERGESORT, compare_int);
    sort(test_array_double, N, sizeof(double), DECREASE, MERGESORT, compare_double);
    flag_if_wrong = 0;
    for(int i = 0; i < N-1; i++){
        if(test_array_int[i] < test_array_int[i+1] || test_array_double[i] < test_array_double[i+1]){ 
            flag_if_wrong = 1;
        }           
    }
    if (flag_if_wrong == 0) printf("MERGE DECREASE (INT AND DOUBLE ARRAYS) SORTED SUCCESFULLY\n"); else printf("MERGE DECREASE ERROR\n");
    
    
}




int main(){
    test();
    printf("\n");
    //EXAMPLES//
    printf("Examples:\n");
    printf("INTEGERS INCREASE\n");
    int A[] = {198, 167, 198, 46, 255, 64, 123, 112, 116, 173, 26, 54, 167, 148, 58};
    for(int i = 0; i < sizeof(A)/sizeof(int); i++){
        printf("%d ", A[i]);           
    }
    sort(A, sizeof(A)/sizeof(int), 4, INCREASE, QUICKSORT, compare_int); //SORTING
    printf("\n");  
    for(int i = 0; i < sizeof(A)/sizeof(int); i++){
        printf("%d ", A[i]);           
    }
    printf("\n---------------------------------------------\n");
            

    printf("INTEGERS DECREASE\n");
    printf("\n");
    int B[] = {198, 167, 198, 46, 255, 64, 123, 112, 116, 173, 26, 54, 167, 148, 58};
    for(int i = 0; i < sizeof(B)/sizeof(int); i++){
        printf("%d ", B[i]);           
    }
    sort(B, sizeof(B)/sizeof(int), 4, DECREASE, COMB_SORT, compare_int); //SORTING
    printf("\n");
    for(int i = 0; i < sizeof(B)/sizeof(int); i++){
        printf("%d ", B[i]);           
    }
    printf("\n---------------------------------------------\n");

    printf("DOUBLES INCREASE\n");
    double C[] = {142.04, 147.11, 207.20, 153.67, 147.77, 215.94, 113.34, 212.94};
    for(int i = 0; i < sizeof(C)/sizeof(double); i++){
        printf("%f ", C[i]);           
    }
    sort(C, sizeof(C)/sizeof(double), 8, INCREASE, BUBBLE, compare_double); //SORTING
    printf("\n");  
    for(int i = 0; i < sizeof(C)/sizeof(double); i++){
        printf("%f ", C[i]);           
    }
    printf("\n---------------------------------------------\n");

    printf("DOUBLES DECREASE\n\n");
    double D[] = {142.04, 147.11, 207.20, 153.67, 147.77, 215.94, 113.34, 212.94};
    for(int i = 0; i < sizeof(D)/sizeof(double); i++){
        printf("%f ", D[i]);           
    }
    sort(D, sizeof(D)/sizeof(double), 8, DECREASE, BUBBLE, compare_double); //SORTING
    printf("\n");  
    for(int i = 0; i < sizeof(D)/sizeof(double); i++){
        printf("%f ", D[i]);           
    }
    printf("\n---------------------------------------------\n");
    
    
    return 0;
}