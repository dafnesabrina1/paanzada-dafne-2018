1149. Sinus Dances
Time limit: 1.0 second
Memory limit: 64 MB
Let An = sin(1–sin(2+sin(3–sin(4+…sin(n))…)
Let Sn = (…(A1+n)A2+n–1)A3+…+2)An+1
For given N print SN
Input
	- One integer N. 1 = N = 200
Output
	- Line containing SN
Sample:

input
	- 3
output
	- ((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1

Problem Author: Vladimir Gladkov 

Problem Source: Ural Collegiate Programming Contest, April 2001, Perm, Test Round
Tags: problem for beginners  (hide tags for unsolved problems)

Assumptions:

	- I always recieve an integer

Solution:

	- Para cada elemento en el rango de mi tamaño -1, agrego un parentesis.
	- Para cada elemento en el rango de mi tamaño (input) -1 voy a tener lo correspondiente a la funcion A.
	- Siempre que empiezo voy a tener un sin(n- )
	- Para los demas casos va a ser un sin(n+ )
	- Al final siempre voy a poner un sin del tamaño y despues voy a cerrar los parentesis correspondientes.
	- Finalmente cuando todas mis As se llamaron en el for de la funcion S, voy a agregar mi input - el numero de iteracion + 1, para que vaya de manera acendiente.
	- Despues de eso corro una vez mas mi funcion A, para obtener el ultimo dato y agrego un + 1, que siempre va al final.

Complexity:

	- Algo muy parecido a O(n*n)