#include <stdio.h>
int main(){
    int N;
    int max, index;
    N = 9;
    int arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    index = 0;
    for (int i = 1; i < N; i++){
        if (arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", index+1);
    return 0;
}