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

/*CTEST(Check, test3)
{
	ASSERT_EQUAL(0, proverka(20));
}


CTEST(getsum, test7)
{
	ASSERT_EQUAL(9000, getsum(1, 10000));
}

CTEST(getsum, test8)
{
	ASSERT_EQUAL(9000, getsum(0, 10000));
}

CTEST(getsum, test9)
{
	ASSERT_EQUAL(9000, getsum(1, 10000));
}

CTEST(getsum, test10)
{
	ASSERT_EQUAL(10200, getsum(100, 10000));
}

CTEST(getsum, test11)
{
	ASSERT_EQUAL(10200, getsum(100, 10000));
}

CTEST(getsum, test12)
{
	ASSERT_EQUAL(11200, getsum(365, 10000));
}

CTEST(getsum, test13)
{
	ASSERT_EQUAL(10200, getsum(31, 10000));
}

CTEST(getsum, test14)
{
	ASSERT_EQUAL(9000, getsum(30, 10000));
}

CTEST(getsum, test15)
{
	ASSERT_EQUAL(10600, getsum(240, 10000));
}

CTEST(getsum, test16)
{
	ASSERT_EQUAL(11200, getsum(241, 10000));
}

CTEST(getsum, test17)
{
	ASSERT_EQUAL(10200, getsum(31, 10000));
}

CTEST(getsum, test18)
{
	ASSERT_EQUAL(10600, getsum(121, 10000));
}

CTEST(getsum, test19)
{
	ASSERT_EQUAL(10200, getsum(120, 10000));
}

CTEST(getsum, test20)
{
	ASSERT_EQUAL(10600, getsum(240, 10000));
}

CTEST(getsum, test21)
{
	ASSERT_EQUAL(11200, getsum(241, 10000));
}

CTEST(getsum, test22)
{
	ASSERT_EQUAL(11200, getsum(365, 10000));
}

CTEST(getsum, test23)
{
	ASSERT_EQUAL(10000, getsum(366, 10000));
}*/
