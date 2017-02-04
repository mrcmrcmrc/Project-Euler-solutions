using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace euler10
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("euler10...");
            Console.WriteLine("The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17");
            Console.WriteLine("Find the sum of all the primes below two million.");

            long limit = 100;
            long sum = 17;
            for (int i = 8; i < limit; i++)
                for (int j = 2; j <= (Math.Sqrt(i)-1)/2; j++)
                {
                    if (i % j == 0)
                        break;
                    else if (j == (i-1)/2)
                        sum += i;
            }
            Console.WriteLine("Sum: "+ sum);
            Console.Read();
           
        }
    }
}
