#include <stdio.h>
#include <string.h>
int main()
{
	char ciag_zn[100] = {"abcdefioeuroerifoecie"};
	int dlugosc = 0;

	
	for(dlugosc =0 ;ciag_zn[dlugosc]>0; ++dlugosc) ;
	dlugosc--;
	for( ;dlugosc>=0;--dlugosc)
	{
		printf("%c",ciag_zn[dlugosc]);
		
	}
	printf("\n");

	
	
		return 0;
		
}
	
	

