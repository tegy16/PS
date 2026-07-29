//12491. 친구
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N, K1, K2;
    int (* info)[3];

    scanf("%d %d %d", &N, &K1, &K2);
    
    info = malloc(sizeof(int[3]) * N);

    for(int i = 0; i < N; i ++){
        scanf("%d %d", &info[i][0], &info[i][1]); //집주소, 학교
        info[i][2] = 0;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i != j){//같은 사람인지 체크
                if(info[i][1] == info[j][1]){//학교 일치 여부
                    if((info[i][0] - info[j][0] <= K1) && (info[i][0] - info[j][0] >= -K1)){
                        info[i][2]++;
                    }
                }
                else{
                    if((info[i][0] - info[j][0] <= K2) && (info[i][0] - info[j][0] >= -K2)){
                        info[i][2]++;
                    }
                }
            }
            else{
                continue;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ", info[i][2]);
    }

    return 0;
}