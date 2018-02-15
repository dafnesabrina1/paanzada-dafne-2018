A password is considered strong if below conditions are all met:

	- It has at least 6 characters and at most 20 characters.
	- It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
	- It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).

Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

Assumptions:

	- I'm assuming that in the third pint the characters must be letters
	- I'm assuming A and a are not the same characters
	- 

Solution:

	- Case one:
		The input has the 3 characteristics and returns 0

	- Case two:
		I define:
			Lower = 1 //there must be at least one lower case
			Upper = 1 //there must be at least one upper case
			Digit = 1 //there must be at least one digit
			Input = [] //I make an array of the input
			Num_Changes //the output
			Repeated = 0 //The number of characters repeated that are together
		With this I would do:
			I will check that the lenght is bigger than 6 and smaller that 20
				If not, I will count the characters extra or less and sum it into Num_Changes
			If there is a lower case Lower = 0
			If there is an upper case Upper = 0
			If there is a digit then Digit = 0
			Todo esto lo haria en un for en donde vaya caracter por caracter en el array Input
				Then I will add it into Num_Changes
		Lastly
			I will compare the first character with it's neighbor
				If it has the same character, then I will compare it with the next one. In this case I will get 2 trues the I will add 1 to Num_changes
				If not I will go to the next position, until the array is finished or until I've found 3 characters together.

Complexity:
	n 
	
			
