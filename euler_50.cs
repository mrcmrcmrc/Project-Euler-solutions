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
