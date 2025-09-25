#include <stdio.h>
int main(){
    int N;
    int Y = 0;
    int M = 0;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        Y += (arr[i] / 30 + 1) * 10;
        M += (arr[i] / 60 + 1) * 15;
    }
    if(Y < M){
        printf("Y %d\n", Y);
    }
    else if(Y > M){
        printf("M %d\n", M);
    }
    else{
        printf("Y M %d", Y);
    }
    return 0;
}