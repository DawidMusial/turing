#include <stdio.h>
#include <stdlib.h>
#include "tape.h"


/*	
	typedef struct{
	char *z_skladni;
	int l_z_skladni;
	}skladnia_t;

	typedef struct{
	
	char *znak;
	int l_znakow;
	skladnia_t skladnia;

	} tape_t;
*/


int inicjuj(tape_t * tape, int rozm_tasmy, int rozm_slownika){

	tape->znak = calloc(rozm_tasmy, sizeof(char));
	for(int i = 0; i<rozm_tasmy; i++){	 
		if(i == 0 || i == rozm_tasmy) tape->znak[i] = '!';
		 else tape->znak[i] = '#';
	}


	return 0;
}  

int dodaj_do_skladni(skladnia_t *skladnia, char z){} 
char wypisz_znak_ze_slownika(skladnia_t *skladnia, int i){} 
int wypisz_slownik(skladnia_t *skladnia); 

int dodaj_do_tasmy(tape_t *tape, char z){}	
char wypisz_znak_z_tasmy(tape_t *tape, int i){} 
int wypisz_tasme(tape_t *tape){}