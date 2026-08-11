#include<stdio.h>
void main()
   {  
	int arr[5];
	int i;
	
	printf("Enter 5 Intergers:\n");
	for(i=0;i<5;i++){
	  scanf("%d",&arr[i]);
   }
   
   printf("the integer is:\n");
    for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	 } 
	 return 0;
}