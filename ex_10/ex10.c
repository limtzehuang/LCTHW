#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2){
		printf("ERROR: You need minimum one argument. \n");
		//This is how to abort program
		return 1;
	}
	
	int i = 0;
	int j = 0;
	char letter;
	for (j = 1; j < argc; j++){
		for (i = 0; letter = argv[j][i],argv[j][i] != '\0'; i++){
			//Kenapa pake argv [1][i] ? Karena kita mau ambil 1 Kata pertama yaitu argv[1] (arg 1)
			//dan cek tiap karakter dari kata tersebut
		
			//Kalo mau jalanin sama argumen dengan spasi jadi kayak gini => ./ex10 "Zed a Shaw"				//berarti argumen akan dibaca keseluruhan sama spasi
			if (letter >= 65 && letter <= 90){
				letter = letter + 32;
			}		
			switch (letter) {
				case 'a' : 
				case 'A' :
					printf("%d: %c\n", i, letter);
					break;
				case 'e' :
				case 'E' :
					printf("%d: %c\n", i, letter);
					break;
				case 'i' :
				case 'I' :
					printf("%d: %c\n", i, letter);
					break;
				case 'o' :
				case 'O' :
					printf("%d: %c\n", i, letter);
					break;
				case 'u' :
				case 'U' :
					printf("%d: %c\n", i, letter);
					break;
				case 'y' :
				case 'Y' :
					if (i>2){
						//It's only sometimes
						printf("%d: %c\n", i, letter);
						break;
					}	
				default :
					printf("%d: %c is not a Vowel \n",i ,letter);
			}
		}
	}
	
	
	return 0;
}
