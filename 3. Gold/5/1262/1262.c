//1262. 긴 자리 곱셈
#include <stdio.h>

int n[100];   int len_n = 0;
int m[100];   int len_m = 0;
int anw[250]; int len_anw = 0;
int ifzero = 0;

void calc(void);

int main(void){
    char temp;
    int minus = 0;

    while (1)
    {
        //n
        scanf(" %c", &temp);
        if(temp == '0')
            break;
        else if(temp == '-'){
            minus++;
            scanf("%c", &temp);
        }

        while (1)
        {
            if(temp == ' ')
                break;
            
            n[len_n] = temp - '0';
            len_n++;
            scanf("%c", &temp);
        }


        //m
        scanf(" %c", &temp);
        if(temp == '-'){
            minus++;
            scanf("%c", &temp);
        }

        while (1)
        {
            if(temp == '\n')
                break;
            
            m[len_m] = temp - '0';
            len_m++;
            scanf("%c", &temp);
        }

        calc();

        if(minus == 1 && ifzero == 1)
            printf("-");
        for (int i = 1; i <= len_anw; i++)
        {
            printf("%d", anw[len_anw - i]);
        }
        len_n = 0;
        len_m = 0;
        minus = 0;
        ifzero = 0;
        
        printf("\n");
    }
    return 0;
}



void calc(void){
    for (int i = 0; i < 250; i++) anw[i] = 0;

    for (int i = 0; i < len_n; i++)
    {
        for (int j = 0; j < len_m; j++)
        {
            anw[i + j] += n[len_n - i - 1] * m[len_m - j - 1];
        }   
    }

    for (int i = 0; i < 240; i++)
    {
        anw[i+1] += anw[i]/10;
        anw[i] %= 10; 
    }

    for (int i = 240; i >= 0; i--)
    {
        if(anw[i] != 0){
            len_anw = i + 1;
            break;
        }
        else if (i == 0)
            len_anw = 1;
    }

    for (int i = 0; i < len_anw; i++){
        if(anw[i] != 0)
            ifzero = 1;
    }
}