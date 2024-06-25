#include<stdio.h>

main(){
	
	FILE* fp;
	char ptr;
	
	fp = fopen("text-files/input.txt", "r");
	
	ptr = fgetc(fp);
	
    while (ptr != EOF){ 
        printf ("%c", ptr); 
        ptr = fgetc(fp); 
    }
	
	fclose (fp);
}