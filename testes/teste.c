#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ponteiro;
    
    int n = 10;


    *ponteiro = &n;
    *ponteiro = 15;

    printf("%i", n);
    printf("%i", *ponteiro);
    


    return 0;
}