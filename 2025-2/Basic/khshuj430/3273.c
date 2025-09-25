#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int count = 0;
    int check[100001] = {0};
    for(int i = 0; i < n; i++){
        int plus = x - arr[i];
        if(plus > 0 && plus <= 100000 && check[plus]){
            count++;
        }
        check[arr[i]] = 1;
    }
    printf("%d",count);
    return 0;
}