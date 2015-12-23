#include<stdio.h>
int main()
{
  char X[] = "AGTGATG";
  char Y[] = "GTTAG";
  int i,j,final[26]={0},sum=0,in[26]={0};
  int m = strlen(X);
  int n = strlen(Y);
  
  for(i=0;i<m;i++)
       in[X[i]-65]++;
  
  
  printf("Longest Common Subsequence is: ");
  
  for(i=0;i<n;i++){
       if(in[Y[i]-65]){
           final[Y[i]-65]++;
           printf("%c",Y[i]);
           in[Y[i]-65]--;                      
      }
  }
  for(i=0;i<26;i++)
        sum+=final[i];
  
  printf("\nLength of LCS is %d\n", sum );
 getch();
  return 0;
}
