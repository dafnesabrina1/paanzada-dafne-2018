Given an array of integers, return indices of two numbers such that they add up to a specfic target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9, Because nums[0] + nums[1] = 2 + 7 = 9, return [0, 1]

Assumptions:

	- The array can go up to infinity
	- There will be a solution
	- Only need one answer
	- Numbers can repeat

Solution:

	- Case one:
		The array has two numbers then: 
			Result:
				[0, 1]
	- Case two:
		There is three numbers then:
			You will save the first number 
			then add the the second one, if the sum isn't 
			the target then you stay with the first one 
			and add with the third one if it isn't the 
			result then we go to the nest position and 
			compere with the other ones.
			Result:
				[a , b] so that nums[a] + nums[b] = target

	- Case two can apply to any other case

Can my code be better:

	You can use a hashtable and lower the complexity
