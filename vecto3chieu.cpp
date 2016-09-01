#include <iostream>
#include <fstream>

using namespace std;

class vector{
	private:
		float a;
		float b;
		float c;
	public:
	/*friend vector operator+(float t1, vector t2);
	friend vector operator-(float t1, vector t2);*/
		vector(float aa=1, float bb=1,float cc=1){
			a=aa;
			b=bb;
			c=cc;
		}
		
		vector(vector const &tp){
			a=tp.a;
			b=tp.b;
			c=tp.c;
		}
		/*vector operator+(float t1){
			vector kq;
			kq.a=t1+a;
			kq.b=t1+b;
			kq.c=t1+c;
			return kq;
		}*/
		vector operator+(vector t1){
			vector kq;
			kq.a=t1.a+a;
			kq.b=t1.b+b;
			kq.c=t1.c+c;
			cout<<"tong 2 vector la\n";
			kq.show();
			return kq;
		}
		/*
		
		vector operator-(float t1){
			vector kq;
			kq.a=t1-a;
			kq.b=t1-b;
			kq.c=t1-c;
			return kq;
		}*/
		
		vector operator-(vector t1){
			vector kq;
			kq.a=t1.a-a;
			kq.b=t1.b-b;
			kq.c=t1.c-c;
			return kq;
		}
		void nhap(){
		cout<<"nhap hoanh do\n";
		cin>>a;
		cout<<"nhap tung do\n";
		cin>>b;
		cout<<"nhap cao do\n";
		cin>>c;
		}
		
		void show(){
			cout<<"v=("<<a<<","<<b<<","<<c<<")\n";
		}
		void ghifile()
             {
                       ofstream f("tuan.txt");
                       f<<"("<<a<<", "<<b<<")";
                       f.close();
                }   
		
};
/*vector operator+(float t1, vector t2){
			vector kq;
			kq.a=t1+t2.a;
			kq.b=t1+t2.b;
			return kq;
		}
vector operator-(float t1, vector t2){
			vector kq;
			kq.a=t1-t2.a;
			kq.b=t1-t2.b;
			return kq;
		}*/
int main(){
	/*vector t1(1,2),t2(2,3);
	t1=t1+t2;
	t1.show();*/	
	vector t1,t2;
	t1.nhap();
	t1.show();
	t2.nhap();
	t2.show();
	t1.operator+(t2);
	t1.ghifile();
	//t1.vector();
	//t1.show();
	
cin.get();
}



