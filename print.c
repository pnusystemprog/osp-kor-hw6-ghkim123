#include <stdio.h>
#include "phone.h"

void printAll(){
	int i;
	printf("<<Display all contacts in the Phone Book>>\n");
	for(i = 0; i < size; ++i){
		struct Contact cur = PhoneBook[i];
		printf("%s	%s\n", cur.Name, cur.PhoneNumber);
	}
}
