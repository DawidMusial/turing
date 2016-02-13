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


	} tape_t;
*/


int inicjuj_t(skladnia_t *skladnia, tape_t *tape){
	
	if(tape->l_znakow == 0 || skladnia->l_z_skladni == 0) exit(EXIT_FAILURE);


	tape->znak = calloc(tape->l_znakow,sizeof(char));
	for(int i = 0; i<tape->l_znakow; i++){	 
		if(i == 0 || i == tape->l_znakow) tape->znak[i] = '!';
		 else tape->znak[i] = '#';
	}
	skladnia->z_skladni=calloc(skladnia->l_z_skladni,sizeof(char));

	return 0;
}  

int dodaj_do_skladni(skladnia_t *skladnia, char z){} 
char wypisz_znak_ze_slownika(skladnia_t *skladnia, int i){} 
int wypisz_slownik(skladnia_t *skladnia); 

int dodaj_do_tasmy(tape_t *tape, char z){}	
char wypisz_znak_z_tasmy(tape_t *tape, int i){} 
int wypisz_tasme(tape_t *tape){}