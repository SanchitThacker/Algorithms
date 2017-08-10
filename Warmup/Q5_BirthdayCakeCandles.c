#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
//only tallest candles will be blown 
int birthdayCakeCandles(int n, int ar_size, int* ar) {
    // Complete this function
    int max=ar[0],count=0;
     for(int ar_i = 0; ar_i < n; ar_i++){
                if(max<ar[ar_i])
                {
                    max=ar[ar_i];
                }
    }
    for(int ar_i = 0; ar_i < n; ar_i++){
                if(max==ar[ar_i])
                {
                    count++;
                }
    }
    return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}

