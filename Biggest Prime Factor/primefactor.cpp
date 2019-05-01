#include<iostream>
#include<math.h>
using namespace std; 
  
int main(void) {
    unsigned long long n = 600851475143;
    unsigned long long i;

    for (i = 2; i < n/2; i++) {
        if(n%i==0) {
            n /= i;
        }
    }

    printf("%llu", n);
}