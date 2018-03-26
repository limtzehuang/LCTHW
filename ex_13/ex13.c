#include <stdio.h>

//Switch Statements

int main( int argc, char *argv[] )
{
	int i = 0;
	
	// let's make our own array of strings (TWO DIMENSIONALS)
	char *states[] = {
		"California", "Oregon",
		"Washington", "Disney"
	};
	
	int num_states = 4;
	
	
	// go through each string in argv
	// why am I skipping argv [0]?
	for ( i = 1; i < argc; i++){
		/*
		if(i <= num_states){
			argv[i] = states[i-1];
		}
		*/
		printf("arg %d: %s\n", i, argv[i]);
		states[i-1] = argv[i]; 
	}
	
	for ( i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i ,states[i]);
	} 
	
	
	return 0;
}
