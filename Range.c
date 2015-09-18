#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[50];
	int i,j,min,max,k;
	printf("Enter the line");
	scanf("%s",a);
	for(i=0,k=0;a[i]!='\0';i++,k++)
	{
		if(a[i] == '-')
		{
			if(i>0)
			{
			  if(((a[i-1]>=48&&a[i+1]<=57)||(a[i-1]>=97&&a[i+1]<=122)||(a[i-1]>=65&&a[i+1]<=90))&&(a[i-1]<a[i+1]))
			  {min = a[i-1];max = a[i+1];
			  i++;
			  for(j=min+1;j<=max;j++,k++)
			        b[k]=j;
			  k--;
			  }
			  else if(((a[i+1]>=48&&a[i-1]<=57)||(a[i+1]>=97&&a[i-1]<=122)||(a[i+1]>=65&&a[i-1]<=90))&&(a[i-1]>a[i+1]))
			  {
			  min = a[i+1];max = a[i-1];
			  i++;
			  for(j=max-1;j>=min;j--,k++)
				b[k]=j;	
			  k--;
			  }
			  else
				b[k]=a[i];
			}
			else
			b[k]=a[i];
		}
		else 
		b[k]=a[i];
	}
		printf("%s\n",b);


}


