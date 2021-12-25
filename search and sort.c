#include<stdio.h>
void main()
{
  int i,j,s,k,one=0,two=0,three=0,four=0;
  int arr[100];
  printf("enter how many element you want\n");
  scanf("%d",&s);
  printf("enter a element:");
  for(i=0;i<s;i++)
  {
    scanf ("%d",&arr[i]);
  }
  for(i=0;i<s;i++)
  {
   if(arr[i]==0)
   break;
   else if(arr[i]>0&&arr[i]<10)
   one++;
   else if(arr[i]>9&&arr[i]<100)
   two++;
   else if(arr[i]>99&&arr[i]<1000)
   three++;
   else if(arr[i]>999&&arr[i]<10000)
    four++;
  }
  printf("total no. of 1-digit=%d\n",one);
  printf("total no. of 2-digit=%d\n",two);
  printf("total no. of 3-digit=%d\n",three);
  printf("total no. of 4-digit=%d\n",four);

  for(i=0;i<s;i++)
  {
    for(j=i+1;j<s;j++)
    {
      if(arr[i]==arr[j])
      printf("duplicate number=%d",arr[i]);
      for(k=j;k<s-1;k++)
      {
       arr[k]=arr[k+1];
      }
      s--;
      j--;
    }

  }
  printf("\narray element after delection of duplicate element");
  for(i=0;i<s;i++)
  {
    printf("%d\t",arr[i]);
  }
}
