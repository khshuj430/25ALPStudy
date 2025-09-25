#include <stdio.h>
int main(){
    int N;
    for(int i = 0; i < 3; i++){
        int total = 0;
        for(int i = 0; i < 4; i++){
            scanf("%d", &N);
            if(N == 0){
                total++;
            }
        }
        if(total == 0){
            printf("E\n");
        }
        else if(total == 1){
            printf("A\n");
        }
        else if(total == 2){
            printf("B\n");
        }
        else if(total == 3){
            printf("C\n");
        }
        else if(total == 4){
            printf("D\n");
        }
    }
    return 0;
}