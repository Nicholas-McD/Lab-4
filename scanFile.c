#include <stdio.h>
#include <stdlib.h>

extern int sum_array(int* arr, int size); 
extern unsigned int sum; 


int main(){

    FILE *scan = fopen("data.txt", "r");

    int docSize = 0;

    fscanf(scan, "%d", &docSize);
    int docArr[docSize]; 
    char line[256]; 
    int index = 0;

    for (int i = 0; i < docSize; i++) {
        fscanf(scan, "%d", &docArr[i]); 
    }

    int total = sum_array(docArr, docSize); 
    printf("total sum = %d\n", total);
    printf("size = %d\n", docSize);


    fclose(scan);
    return 0;
}