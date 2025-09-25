#include <stdio.h>
int main(){
    int a, b = 0;
    int arr[20];
    for(int i = 0; i < 20; i++){
        arr[i] = i + 1;
    }
    for(int i = 0; i < 10; i++){
        scanf("%d %d", &a, &b);
        while(a < b){
            int temp = arr[a-1];
            arr[a-1] = arr[b-1];
            arr[b-1] = temp;
            a++;
            b--;
        }
    }
    for(int i = 0; i < 20; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}