//1795. 세수의 합
#include <stdio.h>

int main(void){
    int save;
    int num;
    int cnt;

    while(1)
    {
        scanf(" %d", &save);
        if(save == 0)
            break;

        cnt = 0;

        for(int i = 1; i <= 9; i++){
            num = save - i;

            if(num >= i*2 && num <= 18){

                for(int j = i; j <= 9; j++){
                    num = save - i - j;

                    if(num >= j && num <= 9){
                        printf("%d %d %d \n", i, j, num);
                        cnt++;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }



    return 0;
}