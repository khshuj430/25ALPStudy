#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        for(int k = 0; k < N - i; k++){
            printf(" ");
        }
        for(int j = 0; j < i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
}