#include<stdio.h>
int main(){
  int n,x,i;
  scanf("%d", &n);
  for(i=1; i <= n; i++){
    if( i % 3 == 0){
      printf(" %d", i);
    }
    else{
      x=i;
      while(1){
	if( x % 10 == 3 ){
	  printf(" %d", i);
	  break;
	}
	x/=10;
	if(x==0) break;
      }
    }
  }
  printf("\n");
  return 0;
}

    
  
