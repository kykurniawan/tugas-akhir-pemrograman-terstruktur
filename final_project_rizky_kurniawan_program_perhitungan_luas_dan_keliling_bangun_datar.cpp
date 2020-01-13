// header -- berfungsi untuk menyertakan library yang digunakan dalam program aplikasi
#include <iostream>

using namespace std;

// inisialisasi variable global
#define PHI 3.14 //konstanta yang nilainya tidak dapat dirubah
const int panjangArray = 5; //konstanta yang nilainya dapat dirubah
char konfirmasi;
float luas, keliling;
string bangunDatar[panjangArray] = {
   "Persegi",
   "Persegi Panjang",
   "Segitiga",
   "Lingkaran",
   "(Keluar Saja)"
};

// fungsi yang digunakan untuk menampilkan biodata
void header() {
   cout << "===========================================================" << endl;
   cout << "==     SELAMAT DATANG DI APLIKASI HITUNG BANGUN DATAR    ==" << endl;
   cout << "==-------------------------------------------------------==" << endl;
   cout << "==   Dibuat oleh:                                        ==" << endl;
   cout << "==        Nama   : RIZKY KURNIAWAN                       ==" << endl;
   cout << "==        NPM    : 18 63 0061                            ==" << endl;
   cout << "==        Kelas  : 3C REGULER PAGI BANJARMASIN           ==" << endl;
   cout << "===========================================================" << endl << endl << endl;
}

//fungsi yang digunakan untuk menampilkan daftar bangun datar sebagai pilihan
void daftarBangunDatar() {
   cout << "Daftar Bangun Datar" << endl;
   cout << "===================================" << endl;

   for (int i = 0; i < panjangArray; i++) {
      cout << i + 1 << ". " << bangunDatar[i] << endl;
   }
}

//fungsi yang digunakan sebagai tempat input pilihan user dan mengarahkan tampilan ke
//operasi yang dipilih oleh user
void pilihBangunDatar() {
   void persegi();
   void persegiPanjang();
   void segitiga();
   void lingkaran();
   int pilihan;
   back:
      cout << "Pilih bangun datar [1,2,3, ...] : ";
   cin >> pilihan;
   
// pengkondisian yang digunakan untuk menentukan pilihan user
   if (pilihan == 1) {
      system("cls");
      persegi();
   } else
   if (pilihan == 2) {
      system("cls");
      persegiPanjang();
   } else
   if (pilihan == 3) {
      system("cls");
      segitiga();
   } else
   if (pilihan == 4) {
      system("cls");
      lingkaran();
   } else
   if (pilihan == 5) {
      system("cls");
      exit(0);
   } else {
      cout << "Maaf pilihan tidak tersedia, masukkan pilihan yang benar" << endl;
      goto back;
   }
}

//fungsi yang digunakan untuk melakukan perhitungan bangun persegi
void persegi() {
   float sisi;

   cout << "========================================" << endl;
   cout << "   LUAS DAN KELILING BANGUN PERSEGI     " << endl;
   cout << "========================================" << endl;
   cout << "Masukkan panjang sisi (cm) : ";
   cin >> sisi;
   luas = sisi * sisi;
   keliling = 4 * sisi;

   cout << "Diketahui:" << endl;
   cout << "Panjang sisi = " << sisi << " cm" << endl;
   cout << endl;
   cout << "Luas:" << endl;
   cout << "luas = sisi x sisi" << endl;
   cout << "luas = " << sisi << " x " << sisi << endl;
   cout << "luas = " << luas << " cm" << endl;
   cout << endl;
   cout << "Keliling:" << endl;
   cout << "keliling = 4(sisi)" << endl;
   cout << "keliling = 4(" << sisi << ")" << endl;
   cout << "keliling = " << keliling << " cm" << endl;
}

//fungsi yang digunakan untuk melakukan perhitungan bangun persegi panjang
void persegiPanjang() {
   float p, l;

   cout << "================================================" << endl;
   cout << "   LUAS DAN KELILING BANGUN PERSEGI PANJANG     " << endl;
   cout << "================================================" << endl;
   cout << "Masukkan panjang (cm) : ";
   cin >> p;
   cout << "Masukkan lebar (cm) : ";
   cin >> l;
   luas = p * l;
   keliling = 2 * (p + l);

   cout << "Diketahui:" << endl;
   cout << "Panjang = " << p << " cm" << endl;
   cout << "Lebar = " << l << " cm" << endl;
   cout << endl;
   cout << "Luas:" << endl;
   cout << "luas = panjang x lebar" << endl;
   cout << "luas = " << p << " x " << l << endl;
   cout << "luas = " << luas << " cm" << endl;
   cout << endl;
   cout << "Keliling:" << endl;
   cout << "keliling = 2(panjang + lebar)" << endl;
   cout << "keliling = 2(" << p << " + " << l << ")" << endl;
   cout << "keliling = " << keliling << " cm" << endl;
}

//fungsi yang digunakan untuk melakukan perhitungan bangun segitiga
void segitiga() {
   float a, t;

   cout << "================================================" << endl;
   cout << "   LUAS BANGUN SEGITIGA" << endl;
   cout << "================================================" << endl;
   cout << "Masukkan panjang alas (cm) : ";
   cin >> a;
   cout << "Masukkan tinggi (cm) : ";
   cin >> t;
   luas = 0.5 * a * t;

   cout << "Diketahui:" << endl;
   cout << "Alas = " << a << " cm" << endl;
   cout << "Tinggi = " << t << " cm" << endl;
   cout << endl;
   cout << "Luas:" << endl;
   cout << "luas = 1/2 x alas x tinggi" << endl;
   cout << "luas = 1/2 x " << a << " x " << t << endl;
   cout << "luas = " << luas << " cm" << endl;
}

//fungsi yang digunakan untuk melakukan perhitungan bangun lingkaran
void lingkaran() {
   float r;

   cout << "================================================" << endl;
   cout << "   LUAS DAN KELILING BANGUN LINGKARAN" << endl;
   cout << "================================================" << endl;
   cout << "Masukkan panjang jari-jari (cm) : ";
   cin >> r;

   luas = PHI * (r * r);
   keliling = 2 * (PHI * r);

   cout << "Diketahui:" << endl;
   cout << "Jari-jari = " << r << " cm" << endl;
   cout << endl;
   cout << "Luas:" << endl;
   cout << "luas = PHI x (jari-jari x jari-jari)" << endl;
   cout << "luas = " << PHI << " x (" << r << " x " << r << ")" << endl;
   cout << "luas = " << luas << " cm" << endl;
   cout << endl;
   cout << "Keliling:" << endl;
   cout << "keliling = 2(PHI x Jari-jari)" << endl;
   cout << "keliling = 2(" << PHI << " * " << r << ")" << endl;
   cout << "keliling = " << keliling << " cm" << endl;
}

//fungsi utama -- fungsi yang akan dieksekusi pertama kali saat program di jalankan
int main() {

   back: system("cls");
   header();
   daftarBangunDatar();
   pilihBangunDatar();
   cout << endl;
   cout << "=====================================" << endl;
   cout << "Mau Hitung Lagi ? [y/t] = ";cin >> konfirmasi;
   
   while (konfirmasi == 'y' || konfirmasi == 'Y') goto back;

   cout << "Mau Keluar ? [y/t] = ";cin >> konfirmasi;
   while (konfirmasi == 't' || konfirmasi == 'T') goto back;

   system("cls");
   return 0;
}
