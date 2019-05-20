#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "phone.h"

static char* PW = "abc123";
static char* errorMsg = "Not matched ";
static char* caseByCnt[3] = {"!!!", "(twice)!!!", "(3 times)!!!"};

void registerPhoneData()
{
    int count_service = 0;
    char* inputVal = (char *)malloc(sizeof(char)*20);
    char userName[10], userPhoneNumber[13];
    
    while(count_service < 3){
    	printf("Password:");
    	scanf("%s", inputVal);
    	if(strcmp(PW, inputVal) == 0){
	    break;
	}
	else{
	    printf("%s",errorMsg);
	    printf("%s\n",caseByCnt[count_service]);
	    count_service += 1;
	}
    }
    if(count_service == 3){
	printf("You Are not allowed to access PhoneBook.\n");
    }
    else{
	printf("New User Name:");
	scanf("%s", userName);
	printf("PhoneNumber:");
	scanf("%s", userPhoneNumber);
	strcpy(PhoneBook[size].Name, userName);
	strcpy(PhoneBook[size].PhoneNumber, userPhoneNumber);
	printf("Registered...\n");
	size += 1;
    }
}
