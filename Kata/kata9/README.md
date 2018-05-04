
- Problem 

	A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

	For 1-byte character, the first bit is a 0, followed by its unicode code.
	For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.
	This is how the UTF-8 encoding would work:

	Char. number range | UTF-8 octet sequence
	(hexadecimal) | (binary)
	--------------------+--------------------------------------------------------------------------------------	
	0000 0000-0000 007F | 0xxxxxxx 0000 0080-0000 07FF | 110xxxxx 10xxxxxx 0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx 0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx

	Given an array of integers representing the data, return whether it is a valid utf-8 encoding.

	Note:
	
	The input is an array of integers. Only the least significant 8 bits of each integer is used to store the data. This means each integer represents only 1 byte of data.

	Example 1:

		data = [197, 130, 1], which represents the octet sequence: 11000101 10000010 00000001. Return true. It is a valid utf-8 encoding for a 2-bytes character followed by a 1-byte character.

	Example 2:

		data = [235, 140, 4], which represented the octet sequence: 11101011 10001100 00000100. Return false. The first 3 bits are all one's and the 4th bit is 0 means it is a 3-bytes character. The next byte is a continuation byte which starts with 10 and that's correct. But the second continuation byte does not start with 10, so it is invalid.

- Solution

	-Firts I would ask for the array to evaluate it:
	
	Note: 
		- I'm considering that they are all numbers
		- and that they are in order
		- and the the number is less than 257

	Then I would convert the number by index to binary:
	
		- I would divide the number by two and save the residue in an array
		- When finish I would save the number saved but invers for example if 10 then 01 (this will be maked with a for with the index being the length and saving it up in another array until index = 0)

	- I would acomodate each one into a variable type int

	- Then I would concatenate each one with a space in between

	- For each element:

		- I would check if it is one byte if so the first byte most be a 0 if not return false
		- I would check if there are 1's in the and the byte it is if the number of bytes = the number of 1s then it's true if not then false.
		- BTW: this is not optimal the optimal way is to check the n-bytes then check the number of bits and if the next number n+1 = 0 if not its false if true then true.
	
 	

