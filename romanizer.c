/* This program will 'romanize' names by adding 'ius' when it detects certain
keywords								   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]){

// Make a pointer to the first argument
	
	char* name = argv[1];

// Romanize the string :

	int i;
	int o;
	int len = strlen(name);
	char nameOut[20];

	for(i=0;i<len;i++){
	name[i] = toupper(name[i]);
	if(name[i] == 'U'){
	name[i] = 'V';}
	}
// Print the converted string

	printf("%s\n", name);

}
