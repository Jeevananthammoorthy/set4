#include <stdio.h>
int main(void) {
          char name[200];
          int i,count=0;
          scanf("%[^\t]s",name);
          printf("Name=%s",name);
          for(i=0;name[i]!='\0';i++)
          {
            if(name[i]=='\n')
          count++;
          }
          printf("\ncount=%d",count+1);
	return 0;
}

