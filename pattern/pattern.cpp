/*
1 
3 2
4 5 6
10 9 8 7
11 12 13 14 15
*/
#include <iostream>
using namespace std;

int main()
{
  int n=5,i,j,k=1,d;
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=i;j++)
      {
          if(i%2==0) printf("%d ",k--);
          else printf("%d ",k++);
      }
      if(i%2==0) k+= i+1;
      else k+= i;
      printf("\n");
  }       
}