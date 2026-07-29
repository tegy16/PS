//2535. MARATON
#include <stdio.h>

#define SIZE 30

char check(char board[][SIZE], int N);

int main(void){
    char board[SIZE][SIZE];
    int N;
    char anw;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++){
            scanf(" %c", &board[i][j]);
        }
    }

    anw = check(board, N);
    

    if(anw)
        printf("%c", anw);
    else
        printf("ongoing");
    
    return 0;
}

char check(char board[][SIZE], int N){
    char alp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++){
            alp = board[i][j];
            if(alp == '.')
                continue;

            if((j < N-2)&&(alp == board[i][j + 1] && alp ==board[i][j + 2]))
                return alp;//가로
            if((i < N-2)&&(alp == board[i + 1][j] && alp ==board[i + 2][j]))
                return alp;//세로
            if((i < N-2 && j >= 2)&&(alp == board[i + 1][j - 1] && alp ==board[i + 2][j - 2]))
                return alp;//대각1
            if((i < N-2 && j < N-2)&&(alp == board[i + 1][j + 1] && alp ==board[i + 2][j + 2]))
                return alp;//대각2
        }
    }
    return 0;
}