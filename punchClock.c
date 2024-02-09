#include "stdio.h"
#include "time.h"
#include "string.h"
#define  MAX_INPUT 30

int main()
{
	time_t punch_in, punch_out;
	struct tm *time_in, *time_out;
	time(&punch_in);

	char tic[MAX_INPUT], toc[MAX_INPUT];
	strncpy(tic, ctime(&punch_in), MAX_INPUT);//tic = ctime(&punch_in);
	tic[strlen(tic) - 1] = '\0';

	printf("Punch in registered at %s\nPress enter to punch out.", tic);
	getc(stdin);

	time(&punch_out);
	strncpy(toc, ctime(&punch_out), MAX_INPUT);
	toc[strlen(toc) - 1] = '\0';
	printf("Punch out registered at %s", ctime(&punch_out));
	
	FILE *file = fopen("timeCard.csv", "r");
	if(file == NULL)
	{
		file = fopen("timeCard.csv", "w");
		fprintf(file, "Time Punched In, ,Time Punched Out\n");
		fclose(file);
	}
	file = fopen("timeCard.csv", "a");
	fprintf(file, "%s, ,%s\n", tic, toc);
	fclose(file);
	printf("Time has been logged.\nPress enter to exit...");
	getc(stdin);
	return 0;
}
