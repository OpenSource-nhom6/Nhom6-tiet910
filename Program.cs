using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace August_24_2016
{
    class Program
    {
        static void Main(string[] args)
        {
            PhanSo p1 = new PhanSo();
            PhanSo p2 = new PhanSo(3, 4);

            Console.WriteLine("p1 = {0}", p1.ToString());
            Console.WriteLine("p1 = {0}", p1);

            int i = 2;
            Console.WriteLine("i = {0}", i);


            Console.ReadKey();
        }
    }
}
