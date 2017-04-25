#include <stdio.h>
#define max_matches 100
#include "random.h"


int main ()
{
    int player = 1, ost, take, y;
    double k;
    ost = max_matches;


    printf ("You move. In the table %d matches \n", ost);
    for (;ost > 0;){
        printf ("How many matches You take? \n");
        scanf("%d", &take);
        ost = ost - take;
        player = player + 1;
        printf ("In the table %d matches \n", ost);

    if (ost > 0){
        take = getrand(1, 9);
        ost = ost - take;
        player = player + 1;
        printf ("Компьютер сделал свой ход \n");
        printf ("In the table %d matches \n\n", ost);
    }
}

    if (player%2 == 0){
        printf ("Вы проиграли\n");
    } else {
        printf( "Вы выиграли\n");
    }
    return 0;
}
