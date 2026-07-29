//14018. 0의 개수
#include <stdio.h>

int calc(long long A, long long B, int n);

int main(void){
    long long A, B;
    int in2 = 0;
    int in5 = 0;
    int anw;
    //2^? 5^? 구하기

    scanf("%lld %lld", &A, &B);

    in2 = calc(A, B, 2);
    in5 = calc(A, B, 5);

    anw = (in2 < in5) ? in2 : in5;

    printf("%d", anw);
    return 0;
}


int calc(long long A, long long B, int n){
    long long power = 1;
    int in = 0;

    while (power < B)
    {
        power *= n;
        in++;
    }//power >= B

    while (in != 0)
    {
        for(int i = 1; power*i <= B; i++){
            if(power*i >= A)
                return in;
        }
        power/=n;
        in--;
    }
    return 0;
}


/*
2^10 + 5
2^10 + 6
2^10 + 7
2^10 + 8

>>답 2^3

B-A+1 >= 4 이기에 최소 2^2가 존재함
*/