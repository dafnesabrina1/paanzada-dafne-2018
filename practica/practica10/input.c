#include <stdio.h>

int main(){
	int character;
	while(1){
		character = fgetc(stdin);
		if(feof(stdin)){
			break;
		}
		fputc(character, stderr);
	}
	return 0;
}