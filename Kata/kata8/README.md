
- Problem

	You've built an inflight entertainment system with on-demand movie streaming.

	Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

	Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

	When building your function:

		- Assume your users will watch exactly two movies
		- Don't make your users watch the same movie twice
		- Optimize for runtime over memory

- Solution

	- I would enter the list into a hashtable
 
	- Then I would pass through each element in the Hash and for each element:

		- I would make an operation where in the flight length I would substract the lenght of the movie

		- then I would check if it is in the hashtable with a for:

			- If it is : I would return true

		- If I finish the for and there wasn't any return then return false 
- Runtime
	
	O(n)

		