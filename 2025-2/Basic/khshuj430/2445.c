#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i < N+1; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        for(int k = 0; k < 2*(N-i); k++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = N-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        for(int k = 0; k < 2*(N-i); k++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}