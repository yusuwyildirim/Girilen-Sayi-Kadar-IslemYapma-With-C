#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int x,i,sonuc;
	char isim[20];
	
	i=0;
	
	printf("yazdirmak istediginiz kelimeyi giriniz\n");
	scanf("%s",&isim);
	
	printf("\n\n");
	
	printf("kac kere yazdirmak istediginizi seciniz:\n");
    scanf("%d",&x);
    
	while(i<x)
	{
	    i++; 
	       
	printf("%s\n",isim);
	
	}
	
	
	
	
	
	
	getch(0);
	return 0;
}
