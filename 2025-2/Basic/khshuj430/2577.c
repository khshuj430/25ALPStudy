#include <stdio.h>
int main(){
    int A, B, C;
    int count[10] = {0};
    scanf("%d %d %d", &A, &B, &C);
    int total;
    total = A * B * C;
    while (total > 0) {
        int a = total % 10;
        count[a]++;
        total =  total / 10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", count[i]);
    }
    return 0;
}