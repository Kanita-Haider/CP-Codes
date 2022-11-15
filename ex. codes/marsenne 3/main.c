#include <stdio.h>
#include<math.h>
int
main ()
{
  int number = 5, is_not_prime, for_counter, prime_checker = 2;

  printf ("The %d smallest Mersenne primes are:\n", number);

  while (number)
    {
      is_not_prime = 0;
      for (for_counter = 2; for_counter < prime_checker; for_counter++)
	{
	  if (prime_checker % for_counter == 0)
	    {
	      is_not_prime = 1;
	      break;
	    }
	}
      if (is_not_prime == 0)
	{
	  printf ("%.0f\n", ((pow (2, prime_checker)) - 1));

	  number--;
	}
      prime_checker++;
    }

  return 0;
}
