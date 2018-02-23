README (libreria) hash

	- Key string => char *
	- value "cualquier cosa" -> void * (apuntador a lo que sea)
								void * (int *p / char *a / double *p [mismo tamaño])
								hacemos un cast
	- El int, double, char, etc.. te dice de que cuanta memoria necesitas
	- malloc te regresa un void *
	- la cosa es que le tienes que decir a c de que tipo es lo que tiene adentro entonces haces un cast y si no haces este cast le tienes que decir a c cuanto se tiene que desplazar
	- no puede ser infinito, tiraria la memoria 
	- hacer un valor SIZE para que no gastes tanto RAM
	- Lo mejor del hash es que puede no haber tantas colisiones o el size que le pusiste se pueden volver a una n pequeña
	- tenemos un tamaño y un index y cuando es igual hacemos un relloc para liberar la memoria
	- Element{
		char* key
		value}
	- instert
		- hash(key)
			- index
				- if()
					- else
						crecerlo
							- inserta
	- get 
		- hash
			- is null return null
				- else
					buscar valor
						- null