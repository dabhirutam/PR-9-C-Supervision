#include<stdio.h>

main(){
	
	FILE *fs, *fd;
	char ptr, str[50];
	
	fs = fopen("text-files/source.txt", "r");
	fd = fopen("text-files/destination.txt", "w");
	
	ptr = fgetc(fs);
	
    while (ptr != EOF){ 
        fputc(ptr, fd);
        printf ("%c", ptr); 
        ptr = fgetc(fs); 
        
    }
	
	fclose (fs);
	fclose (fd);
	
}