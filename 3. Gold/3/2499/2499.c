//2499. 저울
#include <stdio.h>

void sort(int arr, int N);

int main(void){
    int N;
    int weight[1000];
    int m = 1;
    int repeat = 1;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &weight[i]);
        
    }

    sort(weight, N);

    while (repeat)
    {
        
    }
    
    


    return 0;
}

void sort(int arr[], int N){
    int min;
    int temp;
    for (int i = 0; i < N - 1; i++)
    {
        min = i;
        for(int j = i+1; j < N; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}