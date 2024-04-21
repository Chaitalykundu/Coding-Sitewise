# Prime Number

A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself.

&nbsp;

# N.B.:

1 is neither a prime number nor a complex number.

&nbsp;

# Algorithm to Check Prime Numbers in C++

* Run a loop from 2 to n/2 using a variable i.

* Inside the loop, check whether n is divisible by i using the modulo operator ( n % i == 0 ).

* If n is not divisible by i, it means n is a prime number.

* If n is divisible by i, it means n has divisors other than 1 and itself, and thus, it is not a prime number.
