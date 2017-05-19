#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(numOfRemain , test1)
{
        ASSERT_EQUAL(6, move(7));
}

CTEST(numOfRemain, test2)
{
	ASSERT_EQUAL(4, move(15));
}

CTEST(numOfRemain, test3)
{
	ASSERT_EQUAL(7, move(28));
}

CTEST(Check, test1)
{
	ASSERT_EQUAL(1, proverka(7));
}

CTEST(Check, test2)
{
	ASSERT_EQUAL(0, proverka(10);
}


