
   /*   Sinh vien thuc hien: 
   
      Duong Thi Thuy        Pham Quang Thanh
      Ngo Thi Duyen         Nguyen Ba Bao Tram
      Dang Trung Kien       Tran Thi Thu Huong
   */
    
   // main.cpp
      #include <iostream.h>
      #include "PhanSo.h"
      int Menu();
      void Run(int task);
      void NhapLieu(PhanSo,PhanSo);
      void main ()
      {
         int task;
         while(task=Menu()) Run(task);
      }
      void Run(int task)
      {
         PhanSo A,B,C;
         switch (task)
         {
            case 1: 
               cout << "Nhap Phan So Thu Nhat\n" ;
               A.Nhap();
               cout << "Nhap Phan So Thu Hai \n" ;
               B.Nhap();
               C = A.Cong(B);
               cout << "ket qua :"; A.Xuat();cout << " + ";
               B.Xuat();cout << " = " ; C.Xuat();
               cout << endl; 
               cout << "------------------" << endl;
               break;
            case 2: 
               cout << "Nhap Phan So Thu Nhat\n" ;
               A.Nhap();
               cout << "Nhap Phan So Thu Hai \n" ;
               B.Nhap();
               C = A.Tru(B);
               cout << "ket qua :"; A.Xuat();cout << " - ";
               B.Xuat();cout << " = " ; C.Xuat();
               cout << endl; 
               cout << "------------------" << endl;
               break;
            case 3: 
               cout << "Nhap Phan So Thu Nhat\n" ;
               A.Nhap();
               cout << "Nhap Phan So Thu Hai \n" ;
               B.Nhap();
               C = A.Nhan(B);
               cout << "ket qua :"; A.Xuat();cout << " x ";
               B.Xuat();cout << " = " ; C.Xuat();
               cout << endl; 
               cout << "------------------" << endl;
               break;
            case 4: 
               cout << "Nhap Phan So Thu Nhat\n" ;
               A.Nhap();
               cout << "Nhap Phan So Thu Hai \n" ;
               B.Nhap();
               C = A.Chia(B);
               cout << "ket qua : ("; A.Xuat(); 
               cout << ") / (";B.Xuat();
               cout << ") = " ;C.Xuat() ;cout << endl; 
               cout << "------------------" << endl;
               break;
         }
      }
      int Menu()
      {
         cout << "Menu: \n";
         cout << "1.Cong Hai Phan So \n" ;
         cout << "2.Tru Hai Phan So \n" ;
         cout << "3.Nhan Hai Phan So \n" ;
         cout << "4.Chia Hai Phan So \n" ;
         cout << "0.Thoat\n" ;
         cout << "Ban chon:";
         int n ;
         cin >> n ;
         return n ;
      }

