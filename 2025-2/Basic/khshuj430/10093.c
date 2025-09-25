#include <stdio.h>
int main(){
    long long A, B;
    long long count = 0;
    scanf("%lld %lld", &A, &B);
    if(A > B){
        long long temp = A;
        A = B;
        B = temp;
    }
    count = B - A - 1;
    if(count < 0){
        count = 0;
    }
    printf("%lld\n", count);
    for(long long i = A + 1; i < B; i++){
        printf("%lld ", i);
    }
    return 0;
}