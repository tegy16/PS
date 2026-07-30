//8705. 인간은 무엇인가
#include <stdio.h>

int main(void){
    int num;

    scanf("%d", &num);
    num%2024 == 0 ? printf("Yes") : printf("No");

    return 0;
}