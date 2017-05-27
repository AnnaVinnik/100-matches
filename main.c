#include <stdio.h>
#define maxMatches 100
#include "random.h"
#include "Move.h"
#include "check.h"
#include <ctype.h>

int main ()
{
    int player = 1, ost, take;
    ost = maxMatches;


    printf ("You move. In the table %d matches \n", ost);
    for (;ost > 0;){
        printf ("How many matches You take? \n");
        if (scanf("%d", &take) == 1){
            for (;check(take) != 1 ;){
                printf ("Enter a number between 1 and 10\n");
                scanf("%d", &take);
            }
        }
        else {
            for (;scanf("%d", &take) != 1 || check(take) != 1;){
                scanf("%*[^\n]");
                printf("Enter a number between 1 and 10 \n");
            }
        }
        ost = ost - take;
        player = player + 1;
        printf ("In the table %d matches \n", ost);

    if (ost > 0){
        take = move(ost);
        ost = ost - take;
        player = player + 1;
        printf ("Computer has made its move\n");
        printf ("In the table %d matches \n\n", ost);
    }
}

    if (player % 2 == 0){
        printf ("You lost! :(\n");
    } else {
        printf( "You won! =)\n");
    }
    return 0;
}
