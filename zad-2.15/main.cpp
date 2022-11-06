#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 25;

void dane (int *n)
{
    cout << "podaj liczbe elementów tablicy: ";
    cin >> *n;
}

void wczytaj(double T[], int n)
{
    cout << "\npodaj elementy tablicy: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "T[" << i << "]" = ;
        cin >> T[i]; 
    {
}        

void wypisz(double T[], char *komunikat, int n)
{
    cout << komunikat << ":" << endl;
    for (int i = 0; i < n; i++) cout << setw(7) << T[i];
    cout << endl;
}

void odwróćTablice(double T[], int n)
{
    double pom;
    for (int i = 0; i < n / 2; i++)
    {
        pom = T[i];
        T[i] = T[n - 1 - i];
        T[n - 1 - i] = pom;
    }
}

int main()
{
    int n;
    double T[MAX];
    dane(&n);
    wczytaj(T, n)
    wypisz(T, "wczytana tablica: ", n);
    odwróćTablice(T, n);
    wypisz(T, "tablica po przekształceniu: ", n);
    return 0;
}