   /*   Sinh vien thuc hien: 
   
      Duong Thi Thuy        Pham Quang Thanh
      Ngo Thi Duyen         Nguyen Ba Bao Tram
      Dang Trung Kien       Tran Thi Thu Huong
   */
   #ifndef _PhanSo_H
   #define _PhanSo_H
   class PhanSo
   {
      private: 
         int Tu , Mau ;
         void ToiGian();
      public:
         PhanSo(int tu = 0, int mau = 1);
         void Xuat() const;
         PhanSo Chia(PhanSo b) const;
         PhanSo Cong(PhanSo b) const ;
         PhanSo Tru(PhanSo b) const ;
         PhanSo Nhan(PhanSo b) const ;
         bool SoSanh(PhanSo b) const ;
         void Nhap ();
   };
   #endif
