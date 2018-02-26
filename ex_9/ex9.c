#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main (int argc, char *argv[]){
	char *states[] = {"California","Oregon","Washington","Texas"}; 
	int i = 0;
	while (i < argc){
		printf("arg %d: %s\n",i,argv[i]);
		i++;
	}
	
	i = 0;
	while (i < 4){
		printf("State %d: %s\n",i,states[i]);
		i++;
	}
	/*
	i = 25;
	while (i>=0){
		printf("%d\n",i);
		i--;		
	}
	*/
	
	int fahr = LOWER;
	while (fahr <= UPPER){
		printf("%3d Fahrenheit => %8.3f Celcius \n", fahr, 5.0/9.0*(fahr-32));
		fahr += STEP;
	}
	
	return 0;
}
