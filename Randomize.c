#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PPL_NUMB 8

int main(void) {
    int lst[PPL_NUMB];
    for (int i = 0; i < PPL_NUMB; i++){
        lst[i] = 0;
    }
    time_t t;
    time(&t);
    srand(t);
    int n = 0;
    for (int i = 0; i < PPL_NUMB; i++){
        do{
            n = rand() % PPL_NUMB;
        }while (lst[n] == 1);
        lst[n]++;
        printf("%4d", n + 1);
    }
    printf("\n");
    return 0;
}