
///rules of modular arithmatic

if
    a = b (mod N)  ///a mod N==b mod N
    then,
    a^k = b^k (mod N)

(a+b) mod N = (a mod N + b mod N) mod N
(a*b) mod N = (a mod N * b mod N) mod N
(a-b) mod N = (a mod N - b mod N) mod N

(a/b) mod N = (a mod N * inverse of(a)mod N) mod N
inverse of a = BMod(a,N-2,N);


