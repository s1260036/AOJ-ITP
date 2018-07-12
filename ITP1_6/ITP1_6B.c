#include<stdio.h>
int main(){
  int n,b,i,j, w;
  char x;
  int c[13][4];
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      c[j][i]=0;
    }
  }
  scanf("%d\n", &n); for( w = 0; w < n; w++){
    scanf("%c %d\n", &x, &b);
    // C=0 //
    int y = 0;
    if( x == 'S')
      y=0;
    else if( x == 'H')
      y=1;
    else if( x == 'C')
      y=2;
    else
      y=3;
    //   printf("-- %c %d: %d %d\n", x, b, b-1, y);
    c[b-1][y] = 1;
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if( c[j][i] == 0){
	if( i==0 )
	  printf("S %d\n", j+1);
	else if( i == 1 )
	  printf("H %d\n", j+1);
	else if( i == 2)
	  printf("C %d\n", j+1);
	else
	  printf("D %d\n", j+1);
      }
    }
  }
  return 0;
}





