#include<stdio.h>
int bit_cal(int);
int main()
{	
	int a,b,c,i,k;
	printf("\nGive two numbers:\n");
	scanf("%d %d",&a,&b);
	k=bit_mul(b);
	c=0;
	for(i=k-1;i>=0;i--)
		if(((b>>i)&1)==1)
			c=c+(a<<i);

	printf("%d\n",c);
}


int bit_mul(int m)
{
	int i=0;
	while(m>0)
	{
		m=m>>1;
		i++;
	}	
	return i; 
}
