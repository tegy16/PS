//2507. 아이스크림
#include <stdio.h>

int main(void){
    int N, M;
    int arr[200][200] = { 0, };
    int A, B;
    int cnt = 0;
    int n2, n3;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &A, &B);
        arr[A-1][B-1] = 1;
        arr[B-1][A-1] = 1;
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            if (arr[i][j]) continue;

            for (int k = j + 1; k < N; k++) {
                if (arr[i][k] || arr[j][k]) continue;
                cnt++;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}