#include <stdio.h>
#define MOD 1000000007

long long int power (long long int a, long long int b) {
    long long int ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
    }

int main(void) {
    printf("%lld\n",power(2,2));
    printf("%lld\n", power(2,89));
    return 0;
}
