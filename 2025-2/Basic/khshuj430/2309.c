#include <stdio.h>
int main(){
    int arr[9];
    int total = 0;
    int a, b;
    for(int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(total - (arr[i] + arr[j]) == 100){
                a = i;
                b = j;
                goto end;
            }
        }
    }
end:
        for(int i = 0; i < 9; i++){
                if(i == a || i == b){
                    continue;
                }
                printf("%d\n", arr[i]);
            }
    
    return 0;
}