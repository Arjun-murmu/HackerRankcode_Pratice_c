#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,*arr,i;
    int sum = 0;
    scanf("%d",&num);
    arr = (int*)malloc(num * sizeof(int));
    for(i=0;i<=num;i++){
        scanf("%d",arr+i);
    }
    for(int j=0;j< num;j++){
        sum = sum+arr[j];
    }
        printf("%d",sum);
        
        free(arr);
    return 0;
}
