#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include "tape.h"

#define TAPE_SIZE 1024; // domyslna liczba znakow jednoczesnie na tasme
#define SYMB_SIZE 32; //domyslna liczba znakow w alfabecie
//===============================================================

	char *help = 
	"USAGE: %s welcome on turing machine !!\n\n"
	"		./turing [flaga] [atrybut]....[flaga] [atrybut]\n"
	"		flagi:\n"
	"		 -t dlugosc tasmy\n"
	"		 -s dlugosc slownika\n";



//================================================================


int main(int argc, char ** argv){
int i;
char opt;

tape_t tasma;

if(argc == 1){
	fprintf (stderr, help, argv[0]);
	exit (EXIT_FAILURE);	
}

while ((opt = getopt (argc, argv, "t:s:h:")) != -1) {
    switch (opt) {

    	case 't':
    		tasma.l_znakow = atoi(optarg);
    		break;
    	case 's':
   			tasma.skladnia.l_z_skladni = atoi(optarg);
   			break;

    		

		default:                   /* '?' */
      	fprintf (stderr, help, argv[0]);
   		exit (EXIT_FAILURE);		

	}	
}


return 0;
}

