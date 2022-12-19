#include <iostream>

using namespace std;

int main()
{

    // luas persegi panjang
    // int p, l;
    // cout << "masukkan panjang: ";
    // cin >> p;
    // cout << "Masukkan lebar: ";
    // cin >> l;

    // cout << "Luas persegi panjang adalah: " << p * l << endl;

    // luas segitiga

    // float a, t, L;
    // cout << "masukkan alas: ";
    // cin >> a;
    // cout << "Masukkan tinggi: ";
    // cin >> t;
    // L = 0.5 * a * t;
    // cout << "luas segitiga adalah: " << L << endl;

    // luas lingkaran
    // float r, L;

    // cout << "Masukkan jari jari lingkaran: ";
    // cin >> r;

    // L = 3.14 * r * r;
    // cout << "Luas lingkaran adalah: " << L << endl;

    // luas belah ketupat
    // float dSatu, dDua, L;

    // cout << "Masukkan Panjang diagonal 1 = ";
    // cin >> dSatu;
    // cout << "Masukkan Panjang diagonal 2 = ";
    // cin >> dDua;

    // L = 0.5 * (dSatu + dDua);
    // cout << "Luas belah ketupat adalah: " << L << endl;

    //

    // Luas permukaan dan volume kubus
    // int sisi, lp, v;
    // cout << "Masukkan Sisi Kubus: ";
    // cin >> sisi;

    // lp = sisi * sisi * sisi;
    // v = 6 * sisi * sisi;
    // cout << "Luas Permukaan kubus = " << lp << endl;
    // cout << "Volumenya = " << v << endl;

    // Luas permukaan dan volume balok
    // int x, p, l, t, lp, v;
    // cout << "Masukkan panjang  balok: ";
    // cin >> p;
    // cout << "Masukkan lebar balok: ";
    // cin >> l;
    // cout << "Masukkan tinggi balok: ";
    // cin >> t;

    // lp = 2 * (p * l + l * t + p * t);
    // v = p * l * t;
    // cout << "Luas permukaan balok = " << lp << endl;
    // cout << "Volume Balok = " << v << endl;

    // Luas permukaan dan volume tabung
    // float x, r, t, luasPermukaan, volum, luasSelimut, luasAlas, luasTabungTanpaTutup;
    // const float phi = 3.14;

    // cout << "Masukkan jari jari tabung: ";
    // cin >> r;
    // cout << "Masukkan tinggi tabung: ";
    // cin >> t;

    // luasPermukaan = 2 * phi * r * (r + t);
    // volum = phi * r * r * t;
    // luasSelimut = 2 * phi * r * t;
    // luasAlas = phi * r * r;
    // luasTabungTanpaTutup = luasSelimut + luasAlas;

    // cout << "Luas permukaan tabung = " << luasPermukaan << endl;
    // cout << "volume tabung = " << volum << endl;
    // cout << "Luas Selimut tabung = " << luasSelimut << endl;
    // cout << "Luas alas tabung = " << luasAlas << endl;
    // cout << "luas Tabung Tanpa Tutup = " << luasTabungTanpaTutup << endl;

    // Luas permukaan dan volume kerucut

    // float r, t, s, luasPermukaan, volum, luasAlas, luasSelimut;
    // const float phi = 3.14;

    // cout << "Masukkan jari jari krucut: ";
    // cin >> r;
    // cout << "Masukkan tinggi kerucut: ";
    // cin >> t;
    // cout << "Masukkan garis pelukis kerucut (s): ";
    // cin >> s;

    // volum = (1.0 / 3.0) * phi * r * r * t;
    // luasAlas = phi * r * r;
    // luasSelimut = phi * r * s;
    // luasPermukaan = luasAlas + luasSelimut;

    // cout << "Volume kerucut = " << volum << endl;
    // cout << "luas alas kerucut = " << luasAlas << endl;
    // cout << "Luas selimut kerucut = " << luasSelimut << endl;
    // cout << "Luas permukaan kerucut = " << luasPermukaan << endl;

    // Luas permukaan dan volume limas segitiga
    // float t, alasSegitiga, tinggiSegitigaAlas, luasAlas, luasPermukaan, volum;

    // cout << "Masukkan Alas Segitiga: ";
    // cin >> alasSegitiga;
    // cout << "Masukkan Tinggi segitiga: ";
    // cin >> tinggiSegitigaAlas;
    // cout << "Masukkan Tinggi limas Segitiga: ";
    // cin >> t;

    // // rumus
    // luasAlas = 0.5 * alasSegitiga * tinggiSegitigaAlas;
    // luasPermukaan = luasAlas + luasAlas + luasAlas + luasAlas;
    // volum = (1.0 / 3.0) * luasAlas * t;

    // // output

    // cout << "Luas permukaan limas segitiga dengan panjang masing-masing sisi " << alasSegitiga << " adalah = " << luasPermukaan << endl;
    // cout << "volumenya adalah = " << volum;

    // Luas permukaan dan volume limas segi empat

    // float volum, luasPermukaan, t, alasPersegi, alasPersegiPanjang, alasTrapesium, alasBelahKetupat, alasLayangLayang, alasJajarGenjang, LSegitiga1, LSegitiga2, LSegitiga3, alas, tinggiSegitiga, sisi;

    // cout << "limas segi empat dengan alas persegi" << endl;
    // cout << "Masukkan sisi alas : ";
    // cin >> sisi;
    // cout << "Masukkan tinggi segitiga : ";
    // cin >> tinggiSegitiga;
    // cout << "Masukkan tinggi limas Segi Empat : ";
    // cin >> t;

    // alasPersegi = sisi * sisi;
    // //   alasBelahKetupat=0.5*diagonal1*diagonal2;
    // //   alasJajarGenjang = a*t;
    // //   alasLayangLayang=0.5*diagonal1*diagonal2;
    // //   alasPersegiPanjang=p*l;
    // //   alasTrapesium = (a+b)*t/2;
    // alas = sisi;
    // LSegitiga1 = 0.5 * alas * tinggiSegitiga;

    // luasPermukaan = alasPersegi + LSegitiga1 + LSegitiga1 + LSegitiga1 + LSegitiga1;
    // volum = (1.0 / 3.0) * alasPersegi * t;

    // cout << "luas permukaan = " << luasPermukaan << endl;
    // cout << "volume = " << volum << endl;

    // Luas permukaan dan volume bola
    // float volum, luasPermukaan, r;
    // const float phi = 3.14;

    // cout << "Masukan jari jari : ";
    // cin >> r;

    // volum = (4.0 / 3.0) * phi * r * r * r;
    // luasPermukaan = 4 * phi * r * r;

    // cout << "luas permukaan bola = " << luasPermukaan << endl;
    // cout << "volume = " << volum;

    // Luas permukaan dan volume prisma segi 3
    float luasPermukaan, volum, t, sisi, luasAlas, tinggiSegitiga;

    cout << "Masukkan tinggi prisma : ";
    cin >> t;
    cout << "Masukkan tinggi segitigas : ";
    cin >> tinggiSegitiga;
    cout << "Masukkan sisi : ";
    cin >> sisi;

    luasAlas = 0.5 * sisi * tinggiSegitiga;
    luasPermukaan = t * (sisi + sisi + sisi) + (2 * luasAlas);
    volum = luasAlas * t;

    cout << "luas permukaan prisma segi 3 = " << luasPermukaan << endl;
    cout << "volumenya = " << volum;

    return 0;
}