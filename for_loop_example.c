#include <stdio.h>

int main(){

    int foo = 1;

    for(int i = 0; i < 101; i++){
        printf("%d\n", foo + i);
    } 

    return 0;
}