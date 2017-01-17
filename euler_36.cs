/*Double-base palindromes
The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.
Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
(Please note that the palindromic number, in either base, may not include leading zeros.)*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace euler36
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            for(int i = 1; i < 1000000; i++)
            {
                if(isPalindromic(i, 10) && isPalindromic(i, 2))
                {
                    Console.WriteLine(i);
                    sum += i;
                }

            }
            Console.WriteLine("sum = " + sum);

        }
        public static bool isPalindromic(int number, int b)
        {
            int count = 0;
            char[] digits = (Convert.ToString(number, b)).ToCharArray();
            for (int i=0; i<digits.Length;i++)
            {
                if ((digits[i] == digits[digits.Length - i - 1]) )
                {
                    count++;
                }              
            }
            if (count == digits.Length)
            {
                return true;                
            }
            else return false;
        }
       
    }
}
