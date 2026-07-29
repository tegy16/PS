//6358. 투자의 귀재
#include <stdio.h>

int main(void){
    int H, Y;
    float max = 1;
    float temp;
    int in1, in3, in5;

    scanf("%d %d", &H, &Y);

    if(Y < 3)
        in3 = 0;
    else if(Y < 6)
        in3 = 1;
    else if(Y < 9)
        in3 = 2;
    else   
        in3 = 3;

    if(Y < 5)
        in5 = 0;
    else if(Y < 10)
        in5 = 1;
    else   
        in5 = 2;

    for(int i = in5; i >= 0; i--){
        for(int j = in3; j >= 0; j--){
            if(i * 5 + j * 3 <= Y){
                in1 = Y - (i * 5 + j * 3);
                temp = H;
                for(int k = 0; k < i; k++)
                    temp = (int)(temp * 1.35);
                for(int k = 0; k < j; k++)
                    temp = (int)(temp * 1.20);
                for(int k = 0; k < in1; k++)
                    temp = (int)(temp * 1.05);
                if(temp > max) max = temp;   
            }
        }
    }
    H = max;
    printf("%d", H);

    return 0;
}