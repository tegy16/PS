//1050. 카드돌리기
#include <stdio.h>

int main(void){
    int direction, dir;
    int card[4][13];
    char shape, value;
    char temp;
    int n;

    scanf("%c", &temp);//SWNE 순서
    if(temp == 'S')
        direction = 0;
    else if(temp == 'W')
        direction = 1;
    else if(temp == 'N')
        direction = 2;
    else if(temp == 'E')
        direction = 3;
    dir = direction;

    for (int i = 0; i < 52; i++)
    {
        scanf(" %c %c", &shape, &value);

        if (value >= '2' && value <= '9') n = value - '0';
        else if (value == 'T') n = 10;
        else if (value == 'J') n = 11;
        else if (value == 'Q') n = 12;
        else if (value == 'K') n = 13;
        else if (value == 'A') n = 14;

        if (shape == 'C');
        else if (shape == 'D') n += 15;
        else if (shape == 'S') n += 30;
        else if (shape == 'H') n += 45;

        card[(direction + 1)%4][(direction-dir)/4] = n;
        direction++;
    }

    for (int i = 0; i < 4; i++)
    {
        int min, temp;
        for (int j = 0; j < 12; j++)
        {
            min = j;
            for (int k = j + 1; k < 13; k++)
            {
                if(card[i][k] < card[i][min])
                    min = k;
            }
            temp = card[i][j];
            card[i][j] = card[i][min];
            card[i][min] = temp;
        }
    }

    for (int i = 0; i < 4; i++){
        if(i == 0) printf("S: ");
        else if(i == 1) printf("W: ");
        else if(i == 2) printf("N: "); 
        else if(i == 3) printf("E: ");

        for (int j = 0; j < 13; j++)
        {
            shape = card[i][j] / 15;
            if(shape == 0) shape = 'C';
            else if(shape == 1) shape = 'D';
            else if(shape == 2) shape = 'S';
            else if(shape == 3) shape = 'H';

            value = card[i][j] % 15;
            if(value >= 2 && value <= 9) value = '0' + value;
            else if(value == 10) value = 'T';
            else if(value == 11) value = 'J';
            else if(value == 12) value = 'Q';
            else if(value == 13) value = 'K';
            else if(value == 14) value = 'A';

            printf("%c%c ", shape, value);
        }
        printf("\n");    
    }
    return 0;
}