#include<stdio.h>
int main(){
  int a,b,c,x;
  int count = 0;
  scanf("%d%d%d", &a,&b,&c);
  for(int x = a;x <=b;x++){
    if ( c % x == 0)count++;
  }
  printf("%d\n", count);
  return 0;
}


  
