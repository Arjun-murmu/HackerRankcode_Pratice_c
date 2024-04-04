#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int m_and = 0;
  int m_or = 0, m_xor =0;
  for(int i = 1;i<=n;i++){
      for(int j = i+1;j<=n;j++){
          int and = j&i;
          int or = j|i;
          int xor = j^i;
        if(and>m_and && and < k){
            m_and = and;
        }
        if(or > m_or && or<k){
            m_or = or;
        }
        if(xor>m_xor && xor<k){
            m_xor = xor;
        }
      }
  }
  printf("%d\n%d\n%d\n",m_and,m_or,m_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
