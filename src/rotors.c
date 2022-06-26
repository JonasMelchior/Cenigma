#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rotors.h"

struct rotor getRotor(char *rotor);

char get_wiring_mapping_commercial_enigma1(char input);
char get_wiring_mapping_commercial_enigma2(char input);
char get_wiring_mapping_commercial_enigma3(char input);
char get_wiring_mapping_railway_ukw(char input);



struct rotor enigma_1;

struct rotor first_rotor;
struct rotor second_rotor;
struct rotor third_rotor;
struct rotor reflector;

struct rotor all_rotors[4];

struct rotor *initRotorsAndReflectors(char *rotor1, char *rotor2, char *rotor3, char *reflectorS){
	first_rotor = getRotor(rotor1);
	second_rotor = getRotor(rotor2);
	third_rotor = getRotor(rotor3);

	all_rotors[0] = first_rotor;
	all_rotors[1] = second_rotor;
	all_rotors[2] = third_rotor;
	all_rotors[3] = reflector;

	return all_rotors;
}

struct rotor getFirstRotor(){
	return first_rotor;
}

struct rotor getRotor(char *rotor){
	struct rotor retRotor;
	if (!strcmp(rotor, "commercial_enigma1")){
		for (int i = 0; i < 26; i++){
			retRotor.wirings[i].input = i + 65;
			retRotor.wirings[i].output = get_wiring_mapping_commercial_enigma1(i + 65);
		}
		return retRotor;
	}
	else if (!strcmp(rotor, "commercial_enigma2")){
		for (int i = 0; i < 26; i++){
			retRotor.wirings[i].input = i + 65;
			retRotor.wirings[i].output = get_wiring_mapping_commercial_enigma2(i + 65);
		}
		return retRotor;
	}
	else if (!strcmp(rotor, "commercial_enigma3")){
		for (int i = 0; i < 26; i++){
			retRotor.wirings[i].input = i + 65;
			retRotor.wirings[i].output = get_wiring_mapping_commercial_enigma3(i + 65);
		}
		return retRotor;
	}
	else if (!strcmp(rotor, "railway_ukw")){
		for (int i = 0; i < 26; i++){
			retRotor.wirings[i].input = i + 65;
			retRotor.wirings[i].output = get_wiring_mapping_railway_ukw(i + 65);
		}
		return retRotor;
	}
	else {
		return retRotor;
	}
}



char get_wiring_mapping_commercial_enigma1(char input){
	switch (input){
		case 'A':
			return 'D';
		case 'B':
			return 'M';
		case 'C':
			return 'T';
		case 'D':
			return 'W';
		case 'E':
			return 'S';
		case 'F':
			return 'I';
		case 'G':
			return 'L';
		case 'H':
			return 'R';
		case 'I':
			return 'U';
		case 'J':
			return 'Y';
		case 'K':
			return 'Q';
		case 'L':
			return 'N';
		case 'M':
			return 'K';
		case 'N':
			return 'F';
		case 'O':
			return 'E';
		case 'P':
			return 'J';
		case 'Q':
			return 'C';
		case 'R':
			return 'A';
		case 'S':
			return 'Z';
		case 'T':
			return 'B';
		case 'U':
			return 'P';
		case 'V':
			return 'G';
		case 'W':
			return 'X';
		case 'X':
			return 'O';
		case 'Y':
			return 'H';
		case 'Z':
			return 'V';
	}
}

char get_wiring_mapping_commercial_enigma2(char input){
	switch (input){
		case 'A':
			return 'H';
		case 'B':
			return 'Q';
		case 'C':
			return 'Z';
		case 'D':
			return 'G';
		case 'E':
			return 'P';
		case 'F':
			return 'J';
		case 'G':
			return 'T';
		case 'H':
			return 'M';
		case 'I':
			return 'O';
		case 'J':
			return 'B';
		case 'K':
			return 'L';
		case 'L':
			return 'N';
		case 'M':
			return 'C';
		case 'N':
			return 'I';
		case 'O':
			return 'F';
		case 'P':
			return 'D';
		case 'Q':
			return 'Y';
		case 'R':
			return 'A';
		case 'S':
			return 'W';
		case 'T':
			return 'V';
		case 'U':
			return 'E';
		case 'V':
			return 'U';
		case 'W':
			return 'S';
		case 'X':
			return 'R';
		case 'Y':
			return 'K';
		case 'Z':
			return 'X';
	}
}

char get_wiring_mapping_commercial_enigma3(char input){
	switch (input){
		case 'A':
			return 'U';
		case 'B':
			return 'Q';
		case 'C':
			return 'N';
		case 'D':
			return 'T';
		case 'E':
			return 'L';
		case 'F':
			return 'S';
		case 'G':
			return 'Z';
		case 'H':
			return 'F';
		case 'I':
			return 'M';
		case 'J':
			return 'R';
		case 'K':
			return 'E';
		case 'L':
			return 'H';
		case 'M':
			return 'D';
		case 'N':
			return 'P';
		case 'O':
			return 'X';
		case 'P':
			return 'K';
		case 'Q':
			return 'I';
		case 'R':
			return 'B';
		case 'S':
			return 'V';
		case 'T':
			return 'Y';
		case 'U':
			return 'G';
		case 'V':
			return 'J';
		case 'W':
			return 'C';
		case 'X':
			return 'W';
		case 'Y':
			return 'O';
		case 'Z':
			return 'A';
	}
}

char get_wiring_mapping_railway1(char input){
	switch (input){
		case 'A':
			return 'J';
		case 'B':
			return 'G';
		case 'C':
			return 'D';
		case 'D':
			return 'Q';
		case 'E':
			return 'O';
		case 'F':
			return 'X';
		case 'G':
			return 'U';
		case 'H':
			return 'S';
		case 'I':
			return 'C';
		case 'J':
			return 'A';
		case 'K':
			return 'M';
		case 'L':
			return 'I';
		case 'M':
			return 'F';
		case 'N':
			return 'R';
		case 'O':
			return 'V';
		case 'P':
			return 'T';
		case 'Q':
			return 'P';
		case 'R':
			return 'N';
		case 'S':
			return 'E';
		case 'T':
			return 'W';
		case 'U':
			return 'K';
		case 'V':
			return 'B';
		case 'W':
			return 'L';
		case 'X':
			return 'Z';
		case 'Y':
			return 'Y';
		case 'Z':
			return 'H';
	}
}

char get_wiring_mapping_railway_ukw(char input){
	switch (input){
		case 'A':
			return 'Q';
		case 'B':
			return 'Y';
		case 'C':
			return 'H';
		case 'D':
			return 'O';
		case 'E':
			return 'G';
		case 'F':
			return 'N';
		case 'G':
			return 'E';
		case 'H':
			return 'C';
		case 'I':
			return 'V';
		case 'J':
			return 'P';
		case 'K':
			return 'U';
		case 'L':
			return 'Z';
		case 'M':
			return 'T';
		case 'N':
			return 'F';
		case 'O':
			return 'D';
		case 'P':
			return 'J';
		case 'Q':
			return 'A';
		case 'R':
			return 'X';
		case 'S':
			return 'W';
		case 'T':
			return 'M';
		case 'U':
			return 'K';
		case 'V':
			return 'I';
		case 'W':
			return 'S';
		case 'X':
			return 'R';
		case 'Y':
			return 'B';
		case 'Z':
			return 'L';
	}
}

/*int main(){
	struct rotor allRotors[4];

	

	memcpy(allRotors, initRotorsAndReflectors("commercial_enigma1", "commercial_enigma2", "commercial_enigma3", "test"), sizeof(allRotors));

	printf("%c\n", allRotors[1].wirings[1].output);

	return 0;
}*/