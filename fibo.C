#include <stdio.h>

int main(void) {
	// your code goes here 
	int a=0,b=1,n,i,c;
	scanf("%d",&n);
	
	printf("%d %d ",a,b);
	for(i=0;i<n-2;i++)
	{
	    c=a+b;
	    printf("%d ",c);
	    a=b;
	    b=c;
	}
	return 0;
}

