PhanSo.cpp

       #include <iostream.h>
       #include"PhanSo.h"
       int UocChung(int a, int b)
       {
           int r ;
           while (b != 0)
            {
                r = a%b ;
                a = b ;
               b = r ;
           }
           return a ;
       }
       PhanSo::PhanSo(int tu , int mau)
       {
           this->Tu = tu ;
           this->Mau = mau ;
          ToiGian();
       }
       void PhanSo::Xuat() const
       {
           
           if(this->Mau == 0) cout << "Error \n" ;
           else
               if(this->Mau != 1)
                   cout << Tu << "/" << Mau ;     
       }
      PhanSo PhanSo::Chia(PhanSo b) const
       {
           
           //kq.Tu = Tu*b.Mau;
          //kq.Mau = Mau*b.Tu;
           //kq.ToiGian();
           //return kq;
           return PhanSo(this->Tu*b.Mau,this->Mau*b.Tu);
       }
      void PhanSo::ToiGian()
       {
           int UCLN = UocChung(Tu,Mau);
           Tu /= UCLN;
           Mau/= UCLN;
           if(Mau < 0)
           {
               Tu = -Tu;
               Mau = -Mau;
           }
       }
       void PhanSo::Nhap()
       {
           cout << "Tu So: " ; cin >> Tu ;
           do {
               cout << "Mau So (Khac 0): ";cin >> Mau ;
           }
           while (Mau == 0);
           this->ToiGian();    
       }
       bool PhanSo::SoSanh(PhanSo b) const
      {
           return this->Tu*b.Mau < this->Mau*b.Tu;
       }
       PhanSo PhanSo::Cong(PhanSo b) const
       {
           return PhanSo((Tu*b.Mau) + (Mau*b.Tu),Mau*b.Mau);
       }
       PhanSo PhanSo::Nhan(PhanSo b) const
       {
           return PhanSo(this->Tu*b.Tu,this->Mau*b.Mau);
       }
       PhanSo PhanSo::Tru(PhanSo b) const
       {
           return PhanSo((Tu*b.Mau) - (Mau*b.Tu),Mau*b.Mau);
       }
