#include <stdio.h>
#include <stdlib.h>

void print_Table(int tab[], int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d  ",tab[i]);
    printf("\n");
}

void swap(int *a, int *b){
    int help;
    help = *a;
    *a = *b;
    *b = help;
}

void insertion_Sort(int tab[], int size){
    int i,j,position,key;

    for(i=0; i<size; i++){
        key = tab[i];
        position = i;

        while(key < tab[position-1] && position >= 1){
            position--;
        }
        for(j=i; j>position; j--)
            tab[j] = tab[j-1];
        tab[position] = key;
    }
}


int main()
{
    int tab[] = {1,4,7,4,8,9,3,2};
    int size = 8;

    print_Table(tab,size);
    insertion_Sort(tab,size);
    print_Table(tab,size);

    return 0;
}
