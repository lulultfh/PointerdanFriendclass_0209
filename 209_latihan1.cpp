#include <iostream>
using namespace std;

class persegiPanjang
{
public:
    float panjang, lebar;
    float luasPersegiPanjang(float b, float a)
    {
        return a*b;
    }
};

class segitiga 
{
public:
    float tinggi, alas;
    float luasSegitiga(float a, float t)
    {
        return 0.5*a*t;
    }

    int hitung(persegiPanjang p)
    {
        return p.panjang;
    }
};

int main()
{
    persegiPanjang pp;
    segitiga sg;
    cout << "Masukkan panjang = ";
    cin >> pp.panjang;
    cout << "Masukkan lebar = ";
    cin >> pp.lebar;
    cout << "Masukkan alas = ";
    cin >> sg.alas;
    cout << "Masukkan tinggi = ";
    cin >> sg.tinggi;
    cout << "Luas Persegi Panjang = " << pp.luasPersegiPanjang(pp.panjang,pp.lebar)<<endl;
    cout << "Luas Segitiga = " <<sg.luasSegitiga(sg.alas,sg.tinggi)<<endl;
}

