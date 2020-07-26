#include<stdio.h>
#include<stdlib.h>
void merge(int* left,int nl,int* right,int nr,int* a);
int *arr1;
int* mergesort(int* a,int n)
	{
		if(n<2)
			return a;
		else
			{
				int *left,*right;
				int mid,i;
				mid=n/2;
				left=(int*)malloc(mid*sizeof(int));
				right=(int*)malloc((n-mid)*sizeof(int));
				for(i=0;i<mid;i++)
					left[i]=a[i];
				for(i=mid;i<n;i++)
					right[i-mid]=a[i];
			
				mergesort(left,mid);
				mergesort(right,n-mid);
				merge(left,mid,right,n-mid,a);
			}
	}

void merge(int* left,int nl,int* right,int nr,int* a)
	{
		int i,j,k;
		i=j=k=0;
		while(i<nl && j<nr)
			{
				if(left[i]<=right[j])
					{
						a[k]=left[i];
						i++;
					}
				else
					{
						a[k]=right[j];
						j++;
					}
				k++;
			}
				while(i<nl)
					{
						a[k]=left[i];
						i++;k++;
					}
				while(j<nr)
					{
						a[k]=right[j];
						j++;k++;
					}
				
	}




int getpivot(int* a,int len)
{
	int m1,i,len1,pivot;
	m1=len/5;
	if(len%5==0)
		arr1=(int*)malloc(m1*sizeof(int));
	else
		arr1=(int*)malloc((m1+1)*sizeof(int));

	for(i=0;i<m1;i++)
	{
		mergesort(&(a[i*5]),5);
		arr1[i]=a[(i*5)+2];
	}


	if(len%5!=0)
	{
		mergesort(&(a[5*m1]),len-(5*m1));
		arr1[i]=a[(len-(5*m1))/2];
	}
	//divide the whole arr into small arr of of size 5
	//find median of each small one
	//store them in a new arr
	//find median of the new arr, the pivot 
	if(i>5)
		{
		getpivot(arr1,i);				
		return;
		}
	mergesort(arr1,i);
	pivot=arr1[i/2];	
	return pivot;
}	



int main()
	{
		int i,len,pivot;
		int *a;
		printf("\nenter the no of eles:");
		scanf("%d",&len);
		a=(int*)malloc(len*sizeof(int));
		for(i=0;i<len;i++)
			scanf("%d",&a[i]);

		pivot=getpivot(a,len);
		printf("\npivot=%d\n",pivot);
	}

