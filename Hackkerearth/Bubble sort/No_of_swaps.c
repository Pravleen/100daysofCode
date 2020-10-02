
#include <stdio.h>

int main(){
	int num,i,j,arr[100],tmp,count=0;
	scanf("%d", &num);    
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;	
				count++;		
			}
		}
	}
	printf("%d",count);
return 0;
}