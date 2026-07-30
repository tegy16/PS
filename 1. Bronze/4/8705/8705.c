//8705. 인간은 무엇인가
#include <stdio.h>

int main(void){
    int num;

    scanf("%d", &num);
    if(num <= 100000)
        num%2024 == 0 ? printf("Yes") : printf("No");
    else
        printf("No");

    return 0;
}