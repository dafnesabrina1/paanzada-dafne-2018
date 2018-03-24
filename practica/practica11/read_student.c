#include <stdio.h>
#include <string.h>

typedef struct s {
	char name[20];
	char lastName[20];
	unsigned int id;
	unsigned char cal;

} Student;

int main() {
	Student myStudent;
	char *studentDB = "studentDB.data";
	char *lastName = "Perez2";
	FILE *data;

	data = fopen(studentDB, "rb");
	while(1){
		fread(&myStudent, sizeof(Student), 1, data);
		if (!feof(data))
		{
			break;
		}
		if(!strcmp(myStudent.lastName, lastName)){
			printf("name %s \n", myStudent.name);
			printf("LastName %s \n", myStudent.lastName);
			printf("id %s \n", myStudent.id);
			printf("grade %s \n", myStudent.cal);
		}
	}
	fclose(data);

	return 0;
}