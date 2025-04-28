#include <iostream>
using namespace std;

class persegi_panjang{
    private:
    string panjang;
    string lebar;
    int luas;

    public:
    void inputdata(){
        cout << "Masukkan panjangnya = ";
        cin >> panjang;
        cout << "Masukkan lebarnya = ";
        cin >> lebar;
    }
    void output_data(){
        cout << "tampilkan luas = " << luas << endl;
    }
    void hitung_luas(){
        luas = panjang * lebar;
    }
        
};

int main(){
    persegi_panjang pp;
    pp.inputdata();
    pp.hitung_luas();
    pp.output_data();
}