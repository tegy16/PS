//12491. 친구
#include <stdio.h>
#include <stdlib.h>

void quick_sort(int ** info, int N, int mode);

int partition(int ** info, int N, int mode);

int main(void){
    int N, K1, K2;
    int **info;

    scanf("%d %d %d", &N, &K1, &K2);
    
    info = malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
    {
       info[i] = malloc(sizeof(int) * 4);
    }
    

    //입력
    for(int i = 0; i < N; i ++){
        scanf("%d %d", &info[i][0], &info[i][1]);
        info[i][2] = 0;
        info[i][3] = i;
    }//0 = 집주소, 1 = 학교, 2 = 친구 수, 3 = 원래 순서


    quick_sort(info, N, 0);//거리 순 정렬

    /*
    for (int i = 0; i < N; i++)
    printf("%d ", info[i][0]);
    */



    int Max = (K1 > K2) ? K1 : K2;

    for(int i = 0; i < N; i++){//친구 수 결정
        int distance = 1;
        while (i + distance < N && info[i + distance][0] - info[i][0] <= Max)
        {
            if((info[i + distance][1] == info[i][1]) && (info[i + distance][0] - info[i][0] <= K1)){
                info[i][2]++;
                info[i + distance][2]++;
            }
            else if((info[i + distance][1] != info[i][1]) && (info[i + distance][0] - info[i][0] <= K2)){
                info[i][2]++;
                info[i + distance][2]++;
            }
            distance++;
        }
    }


    quick_sort(info, N, 3);//원본으로 정렬

    /*
    for(int i = 0; i < N; i++)
        printf("(%d,%d) ", info[i][3], info[i][2]);
    */


    for(int i = 0; i < N; i++){//출력
        printf("%d ", info[i][2]);
    }

    return 0;
}


void quick_sort(int ** info, int N, int mode){//정렬 기준 info[i][0] or info[i][3]
    
    if(N > 1){
        int q = partition(info, N, mode);

        quick_sort(info, q, mode);
        quick_sort(info+q+1, N-q-1, mode);
    }
}


int partition(int ** info, int N, int mode){
    int * temp;
    int **pivot, **low, **high;

    temp = info[0];
    info[0] = info[N / 2];
    info[N / 2] = temp;//중앙을 pivot으로 설정

    pivot = info;
    low = info + 1;
    high = info + N - 1;

    while (1)
    {
        while (low <= high && ((*low)[mode] < (*pivot)[mode]))
        {
            low++;
        }

        while (low <= high && ((*high)[mode] > (*pivot)[mode]))
        {
            high--;
        }

        if(low > high)
            break;

        temp = *low;
        *low = *high;
        *high = temp; 

        low++;
        high--;
        
    }
    temp = *pivot;
    *pivot = *high;
    *high = temp;

    return (int)(high - info);
}




