#include<stdio.h>
void main()
	{
		int array[]={55,66,77,22,11,52,19};
		int key=77;
		int i,n=7;
		int found = 0;
			for(i=0;i<n;i++)
				{
					if (array[i]==key)
						{
							printf("Linear index is:-%d\nFound at index:-%d",key,i);
						
				     	}
				     	else     
						 	{
        						printf("\nElement not found");
        					}
				}
					
					
	}