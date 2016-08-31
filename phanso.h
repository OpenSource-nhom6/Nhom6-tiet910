    #ifndef _PhanSo_H
        #define _PhanSo_H
        class PhanSo
        {
            private: 
                int Tu , Mau ;
            private:
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
    

    
    

    

