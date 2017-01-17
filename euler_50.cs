/*Consecutive prime sum
Problem 50
The prime 41, can be written as the sum of six consecutive primes:

41 = 2 + 3 + 5 + 7 + 11 + 13
This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace euler50
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 2;
            for(int i = 3; i < 10000; i++)
            {
                for(int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                        break;
                    if (j == i - 1)
                    {
                       
                        sum += i;
                      sum = isPrime(sum);
                    }
                }
                
            }
            Console.ReadLine();

        }
        public static int isPrime(int number)
        {
            for(int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    return number;
                }
                if (i == number - 1)
                {
                    Console.WriteLine(number);
                    return number;
                }
            }
            return 0;
        }
    }
}
