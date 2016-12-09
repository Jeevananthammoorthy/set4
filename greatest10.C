#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10],b=0,i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
	if(a[i]>b)
	b=a[i];
	}
	printf("%d is the greatest number",b);
	return 0;
}

