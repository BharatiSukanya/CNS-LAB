#include<stdio.h>
#include<math.h>

long long int pow_and_mod(long long int a, long long int b, long long int p){
    if (b == 1)
        return a;
 
    else
        return (((long long int)pow(a, b)) % p);
}

int main(){
    long long int P, G, x, a, y, b, k1, k2;
    
    P = 23;
    printf("P chosen: %lld\n",P);
    G=3;
    printf("G chosen: %lld\n",G);
    
    printf("Enter private key of user 1: ");
    scanf("%lld",&a);
    printf("Private key 1: %lld\n", a);
    x = pow_and_mod(G, a, P);
    
    printf("Enter private key or user 2: ");
    scanf("%lld",&b);
    printf("Private key 2: %lld\n", b);
    y = pow_and_mod(G, b, P);
    
    k1=pow_and_mod(y, a, P);
    k2=pow_and_mod(x, b, P);
    
    printf("Secret key of user 1: %lld\n", k1);
    printf("Secret key of user 2: %lld\n",k2);
    
    return 0;
}