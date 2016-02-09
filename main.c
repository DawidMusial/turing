#include<stdio.h>
#include<string.h>



//===============================================================
void help() //tersc pomocy
{
	
	printf("welcome on turing machine !!\n\n");	
	
}
//================================================================



int main(int argc, char ** argv){
int i;
	for( i = 0; i < argc; i++){
		if( strstr(argv[i], "-help") != NULL || strstr(argv[i],"/h") ){
		help();		
		return 0; 			
		}	
	}
return 0;
}

