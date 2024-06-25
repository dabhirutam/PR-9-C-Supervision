#include<stdio.h>

main(){
	
	FILE* fp;
	char ptr;
	int count=1;
	
	fp = fopen("text-files/document.txt", "r");
	
	ptr = fgetc(fp);
	
    while (ptr != EOF){ 
        printf ("%c", ptr); 
        ptr = fgetc(fp); 

		if(ptr == ' '){
			count++;
		}
    }
	
	printf("\n\nCounts the number of words is = %d", count);
	fclose (fp);
}