
#include <stdio.h>

int main(){
	int num,vac[10],pat[10],i,c=0;
	scanf("%d", &num);    
	for(i=0;i<num;i++)
	{
		scanf("%d",&vac[i]);

	} 
	for(i=0;i<num;i++)
	{
		scanf("%d",&pat[i]);
		if(vac[i]<pat[i])
		{
			printf("No");
			c=1;
			break;

		}
		
	}  
	if(c==0)
	{
		printf("Yes");
	}
	    