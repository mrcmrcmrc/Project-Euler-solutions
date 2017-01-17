/*Largest product in a series
Problem 8
The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace euler8csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = new int [1000];
            int[] temp = new int [13];
            double max = 0;
            int sum = 0;
            int x = 0;
            double multipy = 1;
            string[] lines = File.ReadAllLines("numbers.txt");
            
            for(int i = 0; i < 20; i++)
            {
                foreach (char l in lines[i])
                {
                    numbers[x] = (int)char.GetNumericValue(l);
                    x++;
                }
            }

            for (int i = 0; i < 988;i++ )
            {
                for (int j = i; j < i+13; j++)
                {
                    multipy = multipy * numbers[j];
                    
                }
                
                if (multipy > max)
                {
                    max = multipy;
                    for (int a = 0; a < 13; a++)
                    {
                        temp[a] = numbers[i + a];
                    }
                }
                multipy= 1;
            }

            Console.WriteLine(max);
            
            foreach (int t in temp)
                Console.Write(t + "*");
                Console.Read();
        }
      
    }
}
