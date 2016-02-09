#ifndef TAPE_H
#define TAPE_H

	typedef struct{
	char *z_skladni;
	int l_z_skladni;
	}skladnia_t;

	typedef struct{
	
	char *znak;
	int l_znakow;
	skladnia_t skladnia;

	} tape_t;
int inicjuj(tape_t * tape,  int rozm_tasmy, int rozm_slownika);    //alokuje pamiec dla struktur

int dodaj_do_skladni(skladnia_t *skladnia, char z); // dodaje znak do slwonika
char wypisz_znak_ze_slownika(skladnia_t *skladnia, int i); //daje na wyjsciu kolejny znak se slownika i- nr znaku w slowniku
int wypisz_slownik(skladnia_t *skladnia); //wypisuje caly slownik

int dodaj_do_tasmy(tape_t *tape, char z);	// dodaje znak na tasme
char wypisz_znak_z_tasmy(tape_t *tape, int i); //daje na wyjsciu jeden znak z tasmy i-nr znaku
int wypisz_tasme(tape_t *tape);

#endif
