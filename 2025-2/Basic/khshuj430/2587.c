#include <stdio.h>
int main(){
    int arr[5];
    int average;
    int center;
    int total = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    average = total / 5;
    printf("%d\n", average);
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    center = arr[2];
    printf("%d", center);
    return 0;
}