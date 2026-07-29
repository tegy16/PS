//6343. 피규어 정리
#include <stdio.h>

int main(void){
    int N, sum;
    int min = -1;
    int direction[10000];
    char temp;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &temp);
        if(temp == 'N')
            direction[i] = 0;
        else if(temp == 'E')
            direction[i] = 1;
        else if(temp == 'S')
            direction[i] = 2;
        else if(temp == 'W')
            direction[i] = 3;
    }

    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = 0; j < N; j++)
        {
            int temp = i - direction[j];
            if(temp == 0);
            else if(temp == 2 || temp == -2)
                sum += 2;
            else
                sum += 1;         
        }
        if(sum < min || min == -1)
            min = sum;
    }
    
    printf("%d", min);

    return 0;
}