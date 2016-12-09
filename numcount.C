#include <stdio.h>
#include<ctype.h>
int main(void) {
          char name[200];
          int i,count=0;
          scanf("%[^\t]s",name);
          printf("Name=%s",name);
          for(i=0;name[i]!='\0';i++)
          {
            if(isdigit(name[i]))
          count++;
          }
          printf("\ncount=%d",count);
	return 0;
}

