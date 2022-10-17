#include <iostream>

using namespace std;
class ogrenci{
	private:
	string ad;
	int no;
	public:
	void seta(string a){
		ad=a;
	}
	void setb(int b){
		no=b;
	}
	string geta(){
		return ad;
	}
		int getb(){
		return no;
	}
	
};

int main(int argc, char** argv) {
	ogrenci ogr1;
	ogr1.seta("ibrahim");
	ogr1.setb(412607);
	cout<<"adi:"<<ogr1.geta()<<endl;
	cout<<"no:"<<ogr1.getb();
	
	return 0;
}
