#include<stdio.h>
int main(){
  int h,w,i,j;
  while(1){
  scanf("%d %d", &h, &w);
  if( w == 0 && h == 0) break;
  for(i=0;i < h;i++){
    for(j=0;j < w;j++){
      printf("#");
    }
    printf("\n");
  }
  printf("\n");
  }
  return 0;
}

  
    
    
    
