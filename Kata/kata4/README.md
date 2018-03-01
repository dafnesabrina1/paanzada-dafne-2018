Validate if a given string is numeric.

Some examples:

	- "0" => true
	- " 0.1 " => true
	- "abc" => false
	- "1 a" => false
	- "2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

Assumptions:

	- I assumed that there could not be an exponential of exponentials
	- I assumed that there aren't any other numbers than double, exponential and integers.
	- Obviously the code doesn't go up to infinity, there is a limit given by the computer

Solution:
	
	- My solution was to make 3 functions
	- One to check if its an integer or a double:
		- I will pass an array of characters, from what index you would like to begin and up to what index you would like to finish.
		- This one will go character to character and check if its a digit [0...9]
		- If it's not the above then it will check if it is a point (just in case it is a double), if so then it will add one at a variable countpoint
		- If its an integer or a double then it will return true
	- The other one was to check if the string is an exponential
		- This will recieve an array of strings
		- Then it will search for an e (for exponential)
		- This will divide the array into two and check if both of them are either an integer or adouble
		- If the above is true, then it is an exponential
	- The last one is to check if its either a double, an integer or an exponential
		- In here it will check if the string is either an integer, a double or an exponential

