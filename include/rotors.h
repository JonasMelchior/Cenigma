#ifndef ROTORS_H
#define ROTORS_H

struct wiring{
	char input;
	char output;
};

struct rotor{
	struct wiring wirings[26];
	int offset;
};

/*
Available rotors/reflectors to pass as argument:
- commercial_enigma1
- commercial_enigma2
- commercial_enigma3
- railway_ukw (reflector)
*/
struct rotor *initRotorsAndReflectors(char *rotor1, char *rotor2, char *rotor3, char *reflector);
struct rotor getFirstRotor();

#endif