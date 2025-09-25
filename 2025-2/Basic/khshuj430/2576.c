#include <stdio.h>
int main(){
    int arr1[7];
    int arr2[7];
    int total = 0;
    int j = 0;
    for(int i = 0; i < 7; i++){
        scanf("%d", &arr1[i]);
        if(arr1[i] % 2 == 1){
            total += arr1[i];
            arr2[j] = arr1[i];
            j++;
        }
    }
    if(total == 0){
        printf("-1");
    } else {
        for(int i = 0; i < j - 1; i++){
            for(int k = i + 1; k < j; k++){
                if(arr2[i] > arr2[k]){
                    int temp = arr2[i];
                    arr2[i] = arr2[k];
                    arr2[k] = temp;
                }
            }
        }
        printf("%d\n", total);
        printf("%d", arr2[0]);
    }
    return 0;
}