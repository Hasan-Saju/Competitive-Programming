
ETF counts the number of positive
integers upto n which are
co-prime to n

a,b co-prime means = Gcd(a,b)==1

ETF fi diye express kore
fi(5) =4    ///1,2,3,4

If p is a prime
then
Phi(p) = p-1
cause p(prime) er sathe 1 theke p-1 keu divisor share korbe na

Phi(p^x)  //p is a prime
= p^x - Number of integars not coprime with p^x
= p^x - Number of multiple of p
= p^x - (p^x/p)
= (p^x-1)(p-1)


for any N

N= p1^x1 * p2^x2 *p3^x3 * ...... //prime factorization
f(N)= f(p1^x1) * f(p2^x2)*....///multiplicative function

Phi(N) = Phi(p1^x1) * Phi(p2^x2)*....


Phi(N) = N* (p1-1)/p1 * (p2-1)/p2 *......* (pk-1)/pk    ///p gula holo prime factor

Phi(6)= 6*(2-1)*(3-1)/ 2*3
