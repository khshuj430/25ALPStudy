#include <stdio.h>
int main(){
    int N;
    int arr[6];
    int len = 0;
    int count[10] = {0};
    scanf("%d", &N);
    while(N > 0){
        arr[len] = N % 10;
        N /= 10;
        len++;
    }
    for(int i = 0; i < len; i++){
        count[arr[i]]++;
    }
    int six_nine = count[6] + count[9];
    count[6] = (six_nine + 1) / 2;
    count[9] = 0;
    int count_max = 0;
    for(int i = 0; i < 10; i++){
        if(count[i] > count_max){
            count_max = count[i];
        }
    }
    printf("%d\n", count_max);
    return 0;
}