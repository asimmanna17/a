#include<stdio.h>
int bit_cal(unsigned long int a);
int main()
{
	unsigned long int a,b;
	int i,n,a1,b1,carry=0,c1,c=0;
	printf("\nenter the values for a & b:");
	scanf("%ld %ld",&a,&b);
	n=bit_add(b);
	for(i=0;i<n;i++)
	{
		if(b&1==1)
			a=a+(1<<i);
		b=b>>1;
	}
	printf("sum= %ld\n",a);	
}

int bit_add(unsigned long int a)
{
	int count=0;
	while(a>0)
	{
		count++;
		a=a>>1;
	}
	return count;
}

