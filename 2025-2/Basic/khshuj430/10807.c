#include <stdio.h>
int main(){
    int N, v;
    scanf("%d", &N);
    int arr[N]; 
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    int v_count = 0;
    for (int i = 0; i < N; i++){
        if (arr[i] == v) {
            v_count++;
        }
    }
    printf("%d\n", v_count);
    return 0;
}