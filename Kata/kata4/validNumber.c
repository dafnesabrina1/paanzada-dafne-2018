#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isDoubleorInteger(char str[], int j, int end){
	int count = 0;
	int countpoint = 0;
	for(int i = 0; i < end; i++){
		if(isdigit(str[i])){
			count++;
		}
		if(str[i] == '.'){
			countpoint++;
		}
	}
	int compare = count + countpoint;
	if (compare == end){
		return true;
	}
	return false;
}
bool isExponential(char str[]){
	int end = strlen(str);
	int counte = 0;
	int newi = 0;
	int sum = 0;
	for(int i = 0; i< end; i++){
		if(str[i] == 'e'){
			newi = i;
			counte++;
			
		}
	}
	if(counte != 1){
		return false;
	}
	int max = newi - 2;
	int min = newi + 2;
	if(isDoubleorInteger(str, 0, max)){
		sum++;
	}
	if(isDoubleorInteger(str, min, end)){
		sum++;
	}
	int final = sum + counte;
	if(final != 3 ){
		return false;
	}

	return true;
}

bool isNumber(char str[]){
	int count = 0;
	int end = strlen(str);
	if(isDoubleorInteger(str, 0, end) || isExponential(str)){
		return true;
	}
	return false;
}
int main(int argc, char const *argv[]) {
	char str[] = "2.2222228917827e";
	bool c =isNumber(str);
	// prints 1, if true and 0 if false
	printf("%s\n", str);
	printf("%d\n", c);
}