/*
 * casting_arithmetic.c
 *
 *  Created on: 05.06.2016
 *      Author: Michael
 */
#include <stdio.h>

int main(void)
{
	setbuf(stdout, NULL);

	int i1 = 100, i2 = 40;
	float f1, f2, f3;

	f1 = i1/(float)i2;
	printf("%f\n", f1);

	f2 = (float)i1/i2;
	printf("%f\n", f2);

	f3 = i1/i2;
	printf("%f\n", f3);


	return 0;
}

