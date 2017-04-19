#include "random.h"
#include <time.h>
#include <stdlib.h>

int getrand(int min, int max)
{
    srand(time(NULL));
    return (double) min + rand() % max;
}
