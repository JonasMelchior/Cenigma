#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rotors.h"


int main(){
	struct rotor allRotors[4];

	/*
	How to call the function into a set of 3 rotors and a reflector
	*/
	memcpy(allRotors, initRotorsAndReflectors("commercial_enigma1", "commercial_enigma2", "commercial_enigma3", "railway_ukw"), sizeof(allRotors));
	printf("%c\n", allRotors[0].wirings[2].output);

	return 0;
}