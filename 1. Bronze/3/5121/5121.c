//5121. 빵
#include <stdio.h>

int main(void){
    int N;
    int A, B;
    int min = -1;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d %d", &A, &B);
        if(A <= B){
            if(min == -1 || B < min)
                min = B;
        }
    }

    printf("%d", min);
    return 0;
}