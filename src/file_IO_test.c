/*
 * file_IO_test.c
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

	FILE *fp;

	if((fp = fopen("myfile.txt", "wb")) == NULL)
	{
		fprintf(stderr, "Failed to open file!");
		exit(1);
	}

	int age, agenew;
	char fname[10], fnamenew[10];
	char lname[10], lnamenew[10];

	fscanf(stdin, "%d", &age);
	clear_kb();
	fscanf(stdin, "%s", fname);
	fscanf(stdin, "%s", lname);

	fprintf(fp, "%d\n", age);
	fprintf(fp, "%s\n", fname);
	fprintf(fp, "%s\n", lname);
	fclose(fp);
	fgets()

	if((fp = fopen("myfile.txt", "rb")) == NULL)
	{
		fprintf(stderr, "Failed to open file!");
		exit(1);
	}

	fread(&agenew, sizeof(int), 1, fp);
	fread(fnamenew, 1, 5, fp);
	fread(lnamenew, 1, 5, fp);

	fprintf(stdout, "%d\n", agenew);
	fprintf(stdout, "%s\n", fnamenew);
	fprintf(stdout, "%s\n", lnamenew);

	fprintf(stdout, "Finish!"),
	fclose(fp);


	return 0;
}

void clear_kb(void)
{
	char junk[80];
	gets(junk);
}
