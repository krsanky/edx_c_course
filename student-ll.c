#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char 		name     [50];
	int 		age;
	struct student *next;
};

int
main()
{
	struct student *s1, *s2;
	s1 = (struct student *) malloc(sizeof(struct student));
	s2 = (struct student *) malloc(sizeof(struct student));

	strcpy(s1->name, "asdasd");
	s1->age = 12;
	printf("%s is %d years old.\n", s1->name, s1->age);


	strcpy(s2->name, "22asdasd");
	s2->age = 42;
	s1->next = s2;
	printf("%s is %d years old.\n", s1->next->name, s1->next->age);

	free(s1);
	free(s2);
	return 0;
}
