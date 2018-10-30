#include <stdio.h>

int power(int x, unsigned int n);

int main() {
    printf("result %d", power(10, 1));
    return 0;
}

int power(int x, unsigned int n){
   if (n == 1) return x;
   else if(n%2 == 0) return power(x*x,n/2);
   else if (n%2 !=0 && n >2) return x*power(x*x,(n-1)/2);
   else if (n==0) return 1;
}