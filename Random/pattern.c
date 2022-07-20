#include <stdio.h>

int main(){
    
    int i,j;
    int n = 12;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf(" %2d", j*i);
        }
        printf("\n");
    }




    return 0;
}