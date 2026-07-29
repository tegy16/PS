//1047. 피보나치 수열
#include <stdio.h>

int main(void){
    int A = 1;
    int B = 0;
    int C, N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        C = B;
        B = A;
        A += C;
    }

    printf("%d", B);
    return 0;
}