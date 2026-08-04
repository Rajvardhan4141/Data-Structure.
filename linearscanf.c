#include<stdio.h>
void main()
	{
		int array[]={55,66,77,22,11,52,19};
		int key;
		int i,n=7;
		int found = 0;
		printf("Enter any number:");
	
			for(i=0;i<n;i++)
				{	
					scanf("%d",&key);
				}
				{
						if (array[i]==key)
						{
							printf("\nLinear index is:%d\nFound at index:%d",key,i+1);
						
				     	}
				     	else     
						 	{
        						printf("\nElement not found");
        					}
				}
					
					
	}