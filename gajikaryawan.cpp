#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    struct
 {
  char nama[30],kode_status,jabatan[20],status[10],bulan[15];
  int nip, nakar, kode_jab;
  long tunjangan, gapok, total_gaji;
 }karyawan[10];

 long grandtotal=0;
 char bulan[15], lagi;
 int a, b;

 awal:
 cout<<endl;
 cout<<"Jumlah Karyawan    : ";cin>>b;
 cout<<"Bulan              : ";cin>>bulan;
 cout<<endl;
 cout<<"Input Data Karyawan"<<endl;
 cout<<"----------------------------------"<<endl;
 cout<<endl;

 for(a=1;a<=b;a++)
 {
  cout<<"Data karyawan ke-"<<a<<endl;
  cout<<"NIP Karyawan       : ";cin>>karyawan[a].nip;
  cout<<"Nama Karyawan      : ";cin>>karyawan[a].nama;
  cout<<"Kode Jabatan [1/2] : ";cin>>karyawan[a].kode_jab;
  atas:
  cout<<"Kode Status [S/M]  : ";cin>>karyawan[a].kode_status;
  cout<<endl;

  if (karyawan[a].kode_jab==1)
  {
        strcpy(karyawan[a].jabatan, "Administrasi");
        karyawan[a].gapok = 800000;

        switch(karyawan[a].kode_status)
   {
     case 'S':
     case 's':
         karyawan[a].tunjangan = 100000;
         strcpy(karyawan[a].status, "Single");
     break;

     case 'M':
     case 'm':
         karyawan[a].tunjangan = 200000;
         strcpy(karyawan[a].status, "Menikah");
    break;
    default:
         cout<<"Anda salah kode"<<endl;
    goto atas;
   }
  }
  else if (karyawan[a].kode_jab == 2)
  {
   strcpy(karyawan[a].jabatan, "Operasional");
   karyawan[a].gapok = 850000;

   switch(karyawan[a].kode_status)
     {
      case 'S':
      case 's':
          karyawan[a].tunjangan = 100000;
          strcpy(karyawan[a].status, "Single");
      break;

      case 'M':
      case 'm':
          karyawan[a].tunjangan = 200000;
          strcpy(karyawan[a].status, "Menikah");
      break;
      default:
          cout<<"Anda salah kode"<<endl;
      goto atas;
     }
   }

  else
    cout<<"Kode yang anda masukkan salah"<<endl;
    cout<<endl;
  karyawan[a].total_gaji = karyawan[a].gapok + karyawan[a].tunjangan;
 }

 puts("\t\t\t      Daftar Gaji Karyawan");
 puts("\t\t            ''PT YUVERTY SEJAHTERA''");
 cout<<endl;
 cout<<"Bulan = "<<bulan<<endl;
 cout<<"==============================================================================="<<endl;
 cout<<"No  NIP        Nama        Jabatan     Status    Gaji      Tunjangan   Total"<<endl;
 cout<<"    Karyawan   Karyawan                          Pokok                 Gaji"<<endl;
 cout<<"==============================================================================="<<endl;

 for(a=1;a<=b;a++)
 {
  cout<<setiosflags(ios::left)<<setw(4)<<a;
  cout<<setiosflags(ios::left)<<setw(11)<<karyawan[a].nip;
  cout<<setiosflags(ios::left)<<setw(11)<<karyawan[a].nakar;
  cout<<setiosflags(ios::left)<<setw(13)<<karyawan[a].jabatan;
  cout<<setiosflags(ios::left)<<setw(10)<<karyawan[a].status;
  cout<<setiosflags(ios::left)<<setw(12)<<karyawan[a].gapok;
  cout<<setiosflags(ios::left)<<setw(10)<<karyawan[a].tunjangan;
  cout<<setiosflags(ios::left)<<setw(11)<<karyawan[a].total_gaji;
  grandtotal = grandtotal + karyawan[a].total_gaji;
  cout<<endl;
 }
 cout<<"==============================================================================="<<endl;
 cout<<"\t\t\t     Total Gaji Karyawan Rp. "<<grandtotal<<endl;
 cout<<endl;
 cout<<"\t\t\tIngin input lagi [Y/T]: ";cin>>lagi;
 if(lagi =='Y'||lagi == 'y')
 goto awal;
 else
 goto akhir;
 getch();
 akhir:

    return 0;
}
