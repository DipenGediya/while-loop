#include<stdio.h>

main()
{
	int i=1,n;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%2!=1)
		{
			printf("%d\n",n);
		}
		n--;
	}
}