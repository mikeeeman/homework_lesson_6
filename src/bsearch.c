/*
 * bsearch.c
 *
 *  Created on: 05.06.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int comp(const void *s1, const void *s2);

int main(void)
{
	setbuf(stdout, NULL);

	int cnt;

	char *names[SIZE] = {"Michu", "Martin", "Dario", "Stefan", "Melissa"};
	char *key[] = {"Melissa"};
	char *result;

	qsort(names, 5, sizeof(names[4]), comp);
	for(cnt = 0; cnt < SIZE ; cnt++)
	{
		printf("%s\n", names[cnt]);
	}

	if((result = bsearch(key, names, 5, sizeof(names[4]), comp)) == NULL)
	{
		fprintf(stderr, "Name not found");
	}

	printf("Name found at address: %d", result);



	return EXIT_SUCCESS;
}

int comp(const void *s1, const void *s2)
{
	return(strcmp(*(char **)s1, *(char **)s2));
}
