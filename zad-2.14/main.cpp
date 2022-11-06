#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 25;

voud wczytaj(double *T, int n)
{
    for (int i=0;i<2;1++)
 {
    cout << "podaj" << i << " liczbe: ";
    cin >> T[i];
 }
}

void wypisz (double T[], int n)
{
    for (int i = 0, i < 2; i++) cout << setw(10) << T[i];
    cout<<endl;
}

double obliczSume(double *T, int n)
{
    double s = 0;
    for(int i = 0; i < n; i++) s += T[i];
    return s;
}

double obliczIloczny(double *T, int n)
{
    double s = 1;
    for(int i = 0; i < n; i++)
    if (T[i] < 6) s *= T[i];
    return s;
}

int main()
{
    double T[MAX]
    wczytaj(T, 10);
    wypisz(T, 10);
    cout << "\nsuma wszystkich elementów wynosi " << obliczSume(T, 10) << endl;
   cout << "\niloczyn elementów mniejszych od 6 wynosi " << obliczIloczyn(T, 10) << endl;
   return 0;
} 