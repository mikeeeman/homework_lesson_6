/*
 * test.c
 *
 *  Created on: 05.06.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
	setbuf(stdout, NULL);

	time_t now_sec;
	struct tm *now_ptr;
	struct tm now_saved;
	now_sec = time(0);
	now_ptr = localtime(&now_sec);
	now_saved = *now_ptr;

	printf("current time in seconds since 01. January 1970 is: %ld\n\n", now_sec);
	printf("current Time: %.2d:%.2d:%.2d\n", now_saved.tm_hour, now_saved.tm_min, now_saved.tm_sec);
	printf("current Date: %.2d.%.2d.%.2d\n", now_saved.tm_mday, now_saved.tm_mon + 1, now_saved.tm_year + 1900);

	return 0;
}

