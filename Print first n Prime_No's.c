//Print first n Prime no's
#include<stdio.h>
main()
{
	int n,i=3,count,c,flag;
	scanf("%d",&n);
	printf("2\n");
	for(count=2;count<=n;)
	{
		flag=1;
		for(c=3;c<i/2;c+=2)
		{
			if(i%c==0)
			{flag=0;
			break;
			}
		}
		if(flag==1)
		{
			printf("%d\n",i);
			count++;
		}
		i+=2;
	}
}
