//1077. 배낭채우기1
#include <stdio.h>
#include <stdlib.h>

void sort(float *arr[], int N);

int main(void){
    int N, W;
    float *jewel[1000];//무게, 가치, 무게당 가치

    scanf("%d %d", &N, &W);

    for (int i = 0; i < N; i++)
    {
       jewel[i] = malloc(sizeof(float) * 3);
    }
    
    for (int i = 0; i < N; i++)
    {
        scanf(" %f %f", &jewel[i][0], &jewel[i][1]);
        jewel[i][2] = jewel[i][1] / jewel[i][0];
    }

    sort(jewel, N);

    for (int i = 0; i < N; i++)
    {
        printf(" %f |", jewel[i][2]);
    }
    
    


    

    return 0;
}

void sort(float *arr[], int N){
    int max;
    float * temp;
    for (int i = 0; i < N - 1; i++)
    {
        max = i;
        for(int j = i+1; j < N; j++){
            if(arr[j][2] > arr[max][2])
                max = j;
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}