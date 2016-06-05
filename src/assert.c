/*
 * assert.c
 *
 *  Created on: 05.06.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define NDEBUG

int main(void)
{
	setbuf(stdout, NULL);
	int x, y;

	printf("\nEnter n integer value: ");
	scanf("%d", &x);

	printf("\nEnter n integer value: ");
	scanf("%d", &y);

	assert(x != 0);
	assert(y != 0);

	printf("You entered %d.\n", x);
	printf("You entered %d.\n", y);

	return EXIT_SUCCESS;
}

