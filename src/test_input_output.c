/*
 * test_input_output.c
 *
 *  Created on: 05.06.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <stdlib.h>

void clear_kb(void);
int main(void)
{
	setbuf(stdout, NULL);
	char ch;
	int age, rest;
	char fname[10];
	char lname[10];
	while((ch = getc(stdin)) != '\r')
	{
		putc(ch, stdout);
	}

	fscanf(stdin, "%d %d", &age, &rest);
	clear_kb();
	fscanf(stdin, "%s", fname);
	fscanf(stdin, "%s", lname);

	fprintf(stdout, "%d", age);
	fprintf(stdout, "%.2d", rest);
	fprintf(stdout, "%s", fname);
	fprintf(stdout, "%s", lname);

	return 0;
}

void clear_kb(void)
{
	char junk[80];
	gets(junk);
}
