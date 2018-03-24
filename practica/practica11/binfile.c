#include <stdio.h>

typedef struct s {
	char name[20];
	char lastName[20];
	unsigned int id;
	unsigned char cal;

} Student;

int main() {
	char *studentDB = "studentDB.data";
	FILE *data; 
	Student pavanzada[5];
	for (int i = 0; i < 5; i++)
	{
		sprintf(pavanzada[i].name, "student%d", i);
		sprintf(pavanzada[i].lastName, "Perez%d", i);
		pavanzada[i].id = i * 20;
		pavanzada[i].cal = i * 7;
	}

	data = fopen(studentDB, "wb");
	fwrite(pavanzada, sizeof(Student),5,data);
	fclose(data);
	return 0;
}