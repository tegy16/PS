//2535. MARATON
#include <stdio.h>
#define SIZE 30

int main(void){
    char board[SIZE][SIZE];
    int N;
    char alp;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++){
            scanf(" %c", &board[i][j]);
        }
    }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++){
            alp = board[i][j];
            if(alp == '.')
                continue;

            if((j < N-2)&&(alp == board[i][j + 1] && alp ==board[i][j + 2]))
                goto EXIT;//가로
            if((i < N-2)&&(alp == board[i + 1][j] && alp ==board[i + 2][j]))
                goto EXIT;//세로
            if((i < N-2 && j >= 2)&&(alp == board[i + 1][j - 1] && alp ==board[i + 2][j - 2]))
                goto EXIT;//대각1
            if((i < N-2 && j < N-2)&&(alp == board[i + 1][j + 1] && alp ==board[i + 2][j + 2]))
                goto EXIT;//대각2
            
        }
        alp = 0;
    }

    EXIT:
    if(alp == 0)
        printf("ongoing");
    else
        printf("%c", alp);
    
    return 0;
}