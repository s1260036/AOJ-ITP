#include<stdio.h>
int main(){
  int n;
  int i;
  scanf("%d", &n);
  int a[n];
  for( i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for( i = n - 1; i >= 0; i--){
    if( i != n - 1)
      printf(" ");
    printf("%d", a[i]);
  }
  printf("\n");
  return 0;
}

    
    
