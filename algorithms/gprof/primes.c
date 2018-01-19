#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int factor;
    if(n < 2){
        return 0;
    }

    for(factor = 2; factor < n; factor ++){
        if(n % factor == 0){
            return 0;
        }
    }

    return 1;
}

int count_primes(int n)
{
    int i, count;

    count = 0;

    for(i = 0; i < n; i++){
        if(is_prime(i)){
            count ++;
        }
    }

    return count;
}

int main(int argc, char *argv[])
{
    if(argc != 2){
        fprintf(stderr, "Usage: %s n\n", argv[0]);
        return 1;
    } else {
        printf("%d\n", count_primes(atoi(argv[1])));
        return 0;
    }
}
