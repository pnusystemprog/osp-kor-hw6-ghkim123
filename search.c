#include <stdio.h>
#include <string.h>
#include "phone.h"

void searchByName()
{
    int i;
    char inputVal[10];
    printf("Enter a name to search:");
    scanf("%s", inputVal);

    for(i = 0; i < size; ++i){
	struct Contact cur = PhoneBook[i];
	if(strcmp(cur.Name, inputVal) == 0){
	    printf("%s        %s\n", cur.Name, cur.PhoneNumber);
	    return;
	}
    }
    printf("Oops!");
    printf("%s", inputVal);
    printf(" is not in the PhoneBook.\n");
}

