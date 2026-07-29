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

    for (int i = 0; i < N - 2; i++)
    {
        n2 = i+1;
        while (n2 < N - 1)
        {
            if(arr[i][n2] == 1){
                n2++;
                continue;
            }

            n3 = n2+1;
            while (n3 < N)
            {
                if(arr[i][n3] == 1 || arr[n2][n3] == 1){
                    n3++;
                    continue;
                }
                cnt++;
                n3++;
            }
            n2++;
        }
    }
    printf("%d", cnt);

    return 0;
}