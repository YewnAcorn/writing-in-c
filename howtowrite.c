#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

	FILE * fpointer1 = fopen("testingwriter.txt", "w");
	// w is for write mode
	
	fprintf(fpointer1, "hello worlds\n I am learning to write files in c\n I hope this works!");

	FILE * fpointer2 = fopen("testingwriter.txt", "a");

	fprintf(fpointer2, "\n testing the append function");

	char line[255];
	FILE * fpointer3 = fopen("testingwriter.txt", "r");
	
	fgets(line, 255, fpointer3);
	printf("%s", line);
	
	printf("testing");


	fclose(fpointer1);
	fclose(fpointer2);
	fclose(fpointer3);
	
	return 0;
}

