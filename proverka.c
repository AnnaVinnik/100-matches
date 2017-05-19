#include <stdio.h>

int prov (int take)
{
	if (take < 11 && take > 0)
	return 1;
	else return 0;
	if (take < 0)
	return 0;
	else return 1;
}
