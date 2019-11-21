#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input[100];
	int i;
	FILE* fp;
	
	fp = fopen("sample.txt", "r");
	for(i=0; i<3; i++)
	{
		//printf("input a word : ");
		//scanf("%s", input);
		fscanf(fp, "%s\n", input);
		printf("%s\n", input);
	}
	
	fclose(fp);
	
	return 0;
}
