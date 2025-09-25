#include <stdio.h>
int main(){
    int A, B, C;
    int prize;
    scanf("%d %d %d", &A, &B, &C);
    if (A == B && A == C){
        prize = 10000 + A*1000;
    }
    else if (A == B || A == C){
        prize = 1000 + A*100;
    }
    else if (B == C){
        prize = 1000 + B*100;
    }
    else{
        int max = A;
        if (B > max){
            max = B;
        }
        if (C > max){
            max = C;
        }
        prize = max*100;
    }
    printf("%d\n", prize);
    return 0;
}