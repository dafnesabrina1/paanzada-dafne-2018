Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

Input: "UD"  Output: true  
Example 2:

Input: "LL"  Output: false  

Assumptions:
	- I'm imagining the string has a limit
	- I will imagine that just by returning to its original position, then it made a circle

Solution: 
	- I would make an int variable for vertical movements and one for horizontal movements. 	
	- If I see a U I add one to the vertical or if I see a D I rest one
	- If I see a R I add one to the horizontal or if I see a L I rest one
	- At the end if my both variables are 0's I would return true.

Complexity 

	O(n)