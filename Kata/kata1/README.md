Given two lists Aand B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

These lists A and B may contain duplicates. If there are multiple answers, output any of them.

For example, given

A = [12, 28, 46, 32, 50]  B = [50, 12, 32, 46, 28]  
We should return
[1, 4, 3, 2, 0]  
as  P[0] = 1 because the  0th element of  A appears at  B[1], and  P[1] = 4 because the  1st element of  A appears at  B[4], and so on.
Note:

A, B have equal lengths in range [1, 100].
A[i], B[i] are integers in range [0, 10^5].

Assumptions: 

	- Both arrays either A or B have the maximum length of 100
	- There is no float number
	- What is in A is in B
	- A and B are equal sizes
	- All integers are alid in C there is no overflow

Algorithm:

	- Hastable

Code: 

	- I would use a hash or Dictonary that would save the values of
	the second array B. Using the example in the problem 50:0, 12:1,..., 28:4
	- We would then compare the hash with the values and if the value is found
	then we print the position, and that would be all.

Complexity:

	- Of what I remember in algorithim the complexity of the hash
	would ne O(n) which in this case since the lenght is 100. 