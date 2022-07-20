#include <stdio.h>

int main(){
    
    char names[4][10] = {"Luis", "Marcos", "Maria", "Susana"};
    int size = sizeof(names)/sizeof(names[0]);

    for(int i = 0; i < size; i++){
        
        printf("%s\n", names[i]);
        }

    return 0;
    }
