#include <stdio.h>
#include <string.h>
#include "phone.h"

void deleteByName()
{
    int i, flag = 0;
    char inputVal[10];
    printf("Enter a name to delete:");
    scanf("%s", inputVal);

    for(i = 0; i < size; ++i){
	struct Contact cur = PhoneBook[i];
	if(strcmp(cur.Name, inputVal) == 0){
	    printf("%s", inputVal);
	    printf(" is deleted...\n");
	    flag = 1;
	    break;
	}
    }
    if(flag){
	while(i+1 < size){
	    strcpy(PhoneBook[i].Name, PhoneBook[i+1].Name);
	    strcpy(PhoneBook[i].PhoneNumber, PhoneBook[i+1].PhoneNumber);
	    i += 1;
	}
	size -= 1;
    }
    else{
    	printf("Oops!");
	printf("%s", inputVal);
	printf(" is not in the PhoneBook.\n");
    }
}
