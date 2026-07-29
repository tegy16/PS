//6081. 밖에서 안으로 수열
#include <stdio.h>

int main(void){
    int N;
    int arr[500000];
    int L, R;

    scanf(" %d", &N);    
    
    for(int i = 0; i < N; i++)
        scanf(" %d", &arr[i]);

    L = 0;
    R = N-1;

    for(int i = 0; i < N; i++){
        if(i%2 == 0){
            printf("%d ", arr[L]);
            L++;
        }
        else{
            printf("%d ", arr[R]);
            R--;
        }
    }

    return 0;
}