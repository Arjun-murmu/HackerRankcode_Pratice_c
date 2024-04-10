#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *s;
    int k;
    int arr[10];
    s = malloc(1024 * sizeof(char));
    scanf("%s",s);
    s = realloc(s, strlen(s)+1);
      for(int i = 0;i<10;i++)
          arr[i] = 0;
      
      for(int j = 0;j<strlen(s);j++){
           k = s[j] - 48;
          if(k>=0 && k<10){
              arr[k]++;
          } 
      }
      for(int i = 0;i<10;i++){
          printf("%d ",arr[i]);
      }
    return 0;
}
