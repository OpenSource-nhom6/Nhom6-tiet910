Main.cpp
       1: #include <iostream.h>
       2: #include "PhanSo.h"
       3: int Menu();
       4: void Run(int task);
       5: void NhapLieu(PhanSo,PhanSo);
       6: void main ()
       7: {
       8:     int task;
       9:     while(task=Menu())
      10:         Run(task);
      11: }
      12: void Run(int task)
      13: {
      14:     PhanSo A,B,C;
      15:     switch (task)
      16:     {
      17:         
      18:         case 1: 
      19:             cout << "Nhap Phan So Thu Nhat\n" ;
      20:             A.Nhap();
      21:             cout << "Nhap Phan So Thu Hai \n" ;
      22:             B.Nhap();
      23:             C = A.Cong(B);
      24:             cout << "ket qua :"; A.Xuat();cout << " + ";
      25:             B.Xuat();cout << " = " ; C.Xuat();
      26:             cout << endl; 
      27:             cout << "------------------" << endl;
      28:             break;
      29:         case 2: 
      30:             cout << "Nhap Phan So Thu Nhat\n" ;
      31:             A.Nhap();
      32:             cout << "Nhap Phan So Thu Hai \n" ;
      33:             B.Nhap();
      34:             C = A.Tru(B);
      35:             cout << "ket qua :"; A.Xuat();cout << " - ";
      36:             B.Xuat();cout << " = " ; C.Xuat();
      37:             cout << endl; 
      38:             cout << "------------------" << endl;
      39:             break;
      40:         case 3: 
      41:             cout << "Nhap Phan So Thu Nhat\n" ;
      42:             A.Nhap();
      43:             cout << "Nhap Phan So Thu Hai \n" ;
      44:             B.Nhap();
      45:             C = A.Nhan(B);
      46:             cout << "ket qua :"; A.Xuat();cout << " x ";
      47:             B.Xuat();cout << " = " ; C.Xuat();
      48:             cout << endl; 
      49:             cout << "------------------" << endl;
      50:             break;
      51:         case 4: 
      52:             cout << "Nhap Phan So Thu Nhat\n" ;
      53:             A.Nhap();
      54:             cout << "Nhap Phan So Thu Hai \n" ;
      55:             B.Nhap();
      56:             C = A.Chia(B);
      57:             cout << "ket qua : ("; A.Xuat(); 
      58:             cout << ") / (";B.Xuat();
      59:             cout << ") = " ;C.Xuat() ;cout << endl; 
      60:             cout << "------------------" << endl;
      61:             break;
      62:     }
      63: }
      64: int Menu()
      65: {
      66:     cout << "Menu: \n";
      67:     cout << "1.Cong Hai Phan So \n" ;
      68:     cout << "2.Tru Hai Phan So \n" ;
      69:     cout << "3.Nhan Hai Phan So \n" ;
      70:     cout << "4.Chia Hai Phan So \n" ;
      71:     cout << "0.Thoat\n" ;
      72:     cout << "Ban chon:";
      73:     int n ;
      74:     cin >> n ;
      75:     return n ;
      76: }

