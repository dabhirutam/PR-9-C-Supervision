#include<stdio.h>

main(){
	
	FILE* fp;
	
	fp = fopen("text-files/sample.txt", "r");
	
	fclose (fp );
}