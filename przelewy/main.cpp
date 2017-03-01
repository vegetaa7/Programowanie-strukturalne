#include <iostream>
#include <fstream>

using namespace std;


void wpisz_dane();

void wpisz_dane2();
void przelew_kowalski();

fstream kowalski;
fstream nowak;

int main()
{

wpisz_dane();
wpisz_dane2();
przelew_kowalski;


    return 0;
}

void wpisz_dane()

{
    string imie,nazwisko;
    int saldo_konta;

    cin>>imie;cin>>nazwisko;cin>>saldo_konta;

    kowalski.open("Kowalski.txt", ios::out );

    kowalski<<imie<<endl;
    kowalski<<nazwisko<<endl;
    kowalski<<saldo_konta<<endl;
}

void wpisz_dane2()

{

    void przelew_kowalski()
    {
        int przelew;
        cout<<"Ile chcesz przelac?";
        cin>>przelew;

        kowalski.open("Kowalski.txt",ios::out);

        kowalski<<przelew;    //Messi-jak wpisaæ to do 3 inii pliku????


    }














    string imie,nazwisko;
    int saldo_konta;

    cin>>imie;cin>>nazwisko;cin>>saldo_konta;

    nowak.open("Kowalski.txt", ios::out );

    nowak<<imie<<endl;
    nowak<<nazwisko<<endl;
    nowak<<saldo_konta<<endl;
}
