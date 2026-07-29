//8894. 실수와 문자 입출력
#include <stdio.h>

int main(void){
    float num;
    char A, B;

    scanf("%f", &num);
    scanf(" %c %c", &A, &B);

    printf("%.3f\n", num);
    printf("%c %c", A, B);

    return 0;
}