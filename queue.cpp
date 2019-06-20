#include <iostream>
#include <conio.h>
#define MAX 8
using namespace std;
struct queue {
            int HEAD,TAIL;
            int data[MAX];
        }antrian;
void create ()
{
    antrian.HEAD = 0;
    antrian.TAIL = -1;
}
bool IsEmpty ()
{
    if (antrian.TAIL == -1)
       {
           return true;
       }
        else
        {
            return false;
        }

}
bool IsFull ()
{
    if (antrian.TAIL == MAX-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Enqueue ()
{
    if (IsFull()){
       cout << "ANTRIAN SUDAH PENUH!"<<endl;
    }
    else
    {    antrian.TAIL++;
        cout << "Masukan Data: ";
        cin >> antrian.data[antrian.TAIL];
    }
}
int Dequeue ()
{ if (IsEmpty()){
        cout << "Data Kosong";
        }
    else
    {
        cout << "Data " << antrian.data[antrian.HEAD]<< " telah diambil" << endl;
        for (int i=0; i<antrian.TAIL; i++)
        {
            antrian.data[i]=antrian.data[i+1];
        }
        antrian.TAIL--;
    }

}
void Clear()
{
   if (IsEmpty())
    {
        cout << "Antrian Sudah dikosongkan"<< endl;
    }
   else
   {
    antrian.TAIL = -1;
    cout <<  "Data Berhasil Dihapus" << endl;
   }
}
void Tampil()
{
    if (IsEmpty()){
        cout << "Antrian Kosong" <<endl;
    }
    else {
        for (int i=0; i<=antrian.TAIL; i++){
          cout << "Data indeks ke"<< i << " adalah = "<<antrian.data[i]<<endl;
        }

    }
}

int main ()
{   int menu;
    create();
    while (menu != 0)
    {
        cout << "Menu :"<< endl;
        cout << "=========================" <<endl;
        cout << "1.Tambah Data (Enqueue)" <<endl;
        cout << "2.Ambil DatA (Dequeue)" <<endl;
        cout << "3.Hapus Data (Clear)" <<endl;
        cout << "4.Cetak Data (Print Queue)" <<endl;
        cout << "0.Keluar" <<endl;
        cout << "=========================" <<endl;
        cout << "Press Menu: ";
        cin >> menu;
        if ( menu == 1)
        {
            Enqueue();
        }
        else if (menu == 2)
        {
            Dequeue();
        }
        else if (menu == 3)
        {
            Clear();
        }
        else if (menu == 4)
        {
            Tampil();
        }
        getch();
    }
}

