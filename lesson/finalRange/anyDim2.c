#include <stdio.h>

int mian(void){
    int arr1[3][4];
    int arr2[7][9];
    printf("세로3, 가로4: %ld \n", sizeof(arr1));
    printf("세로7, 가로9: %ld \n", sizeof(arr2));
    return 0;
}