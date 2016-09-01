using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace August_24_2016
{
    class PhanSo
    {
        private int ts, ms;
        public PhanSo(int tt = 0, int tm = 1)
        {
            ts = tt;
            ms = (tm == 0) ? 1 : tm;
        }
        public int ddTS
        {
            get { return ts; }
            set { ts = value; }
        }
        public void HienThi()
        {
            Console.WriteLine("{0}/{1}", ts, ms);
        }
        public override string ToString()
        {
            string s = ts.ToString() + "/" + ms.ToString();
            return s;
        }

        /*public static PhanSo operator +(PhanSo ta, PhanSo tb)
        {

        }
        public static PhanSo operator +(PhanSo ta, PhanSo tb)
        {

        }
        public static PhanSo operator +(PhanSo ta, PhanSo tb)
        {

        }
        public static PhanSo operator +(PhanSo ta, PhanSo tb)
        {

        }*/
    }
}
