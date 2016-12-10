#include <stdio.h>

int main(void) {
	// your code goes here
	int i,count=0;
	char str[50];
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	 if(!isalnum(str[i]))
	 count++;
	 printf("No of special characters=%d",count);
	return 0;
}

