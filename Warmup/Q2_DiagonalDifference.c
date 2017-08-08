#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum1=0,sum2=0,sub=0,subs=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          if(a_i==a_j)
          {
              sum1+=a[a_i][a_j];
          }
           if(a_i==(n-a_j-1))
           {
               sum2+=a[a_i][a_j];
           }
       }
    }
    sub=sum1-sum2;
    subs=abs(sub);
    printf("%d",subs);
    return 0;
}

