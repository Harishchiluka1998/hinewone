#include<stdio.h>
int main()
{
	int data,rev=0,temp;
	printf("enter the data");
	scanf("%d",&data);
	for(rev=0,temp=data;temp;temp/=10)
	
	{
		rev=rev*10+temp%10;
	}
	if(data==rev)
		printf(".its a palindrome");
	else
	printf(".its not a palindrome");
}

