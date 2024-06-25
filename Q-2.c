#include<stdio.h>

main(){
	
	FILE* fp;
	
	fp = fopen("text-files/output.txt", "w");
	
	fputs("Hello, Your name with greeting !", fp);
	
	fclose (fp);
}