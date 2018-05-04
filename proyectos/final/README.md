MAGIC TRICK
Vidhi went to a magic show last week where she was astounded by a magic trick performed by the great Mandwarf, the brown. His trick was as follows :

Ask a volunteer from the audience to write down a list L of N integers.
Ask another volunteer from the audience to provide three integers A, B, C
Ask another volunteer from the audience to provide N length string called S where each letter is either 'R', 'A' or 'M'
Close his eyes for a split second and give the output of The Ancient Algorithm on this input.
We all know that The Ancient Algorithm is as follows :

for i from 1 to N do 

    if ith letter of S is 'R'
        reverse L[i...N]
    else if ith letter of S is 'A'
        add A to all numbers of L[i..N].
    else if ith letter of S is 'M'
        multiply B to all numbers of L[i..N].

    for all number in L[i..N], module them by C.

    announce L[i] out loud

end

Vidhi's boyfriend got jealous when he saw her getting impressed by Mandwarf, the brown's wisdom. He wants to learn the trick to gain her undivided admiration. How about you help him?

Constraints:
1 = T = 100 
1 = N = 1000
0 = L[i] = 1018
0 = A,B = 1018
2 = C = 1018
Input
First line contains a single integer T, denoting the number of test cases. Then follow T test case scenarios. Each test case begins with an integer N, the size of the list L. Then in next line, you'd find N space separated integers - the list L itself. In next line, there'd be three space separated integers A, B, C followed by string S in the next line.

Output
For each test case you've to output N space separated integers - the numbers announced by Mandwarf, the brown.

Example
Input:
2
3
1 1 1
2 3 1000
ARM
4
1 2 3 4
0 1 1000
AMAM

Output:
3 3 9
1 2 3 4

SOLUTION
First of all there are constraints with really long integers for example the constraint in A, B, C they are constraints with max 10^18 so I'll be using the long long int type

I'll recieve t which are the number of test cases

I'll do a for that will un t times which will ask for:

	- n which is the length of list L
	- a list L no bigger than 10^18
	- 2 integers A and B no bigger than 10^18 and an integer C no smaller than 2 and no bigger than 10^18 
	- a list S with the letters A, M or R

	After that I will pass through each element in array S

		- If the current element is R:
			L will revearse from the number of index where you found R in S until the end of L
		- If the current element is A:
			To each element you will add the variable A
		- If its M:
			Each element from L will multiply by B
		- Take the mod c from the actual element and save it in L in the current position
	print L
