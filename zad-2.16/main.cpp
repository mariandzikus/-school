#include <iostream>
#include <iomanip>

using namespace std;

void wczytaj(int T[], int n)
{
 cout << "\npodaj elementy tablicy:" << endl;
 for (int i = 0; i < n; i++)
 {
  cout << "T[" << i << "] = ";
  cin >> T[i];
 }
}

void wypisz(int T[], char *komunikat, int n)
{
 cout << komunikat << endl;
 for (int i = 0; i < n; i++) cout << setw(7) << T[i];
 cout << endl;
}

void wystepowanie_elementow_tablicy(int T[], int n) // L[i] to ilosc wystapien danej liczby, gdzie 'i' to miejsce pierwszego wystapienia w tablicy T 
{
    int suma;
    int L[15] = {0};
    bool flag[15] = {false}; // tablica, gdzie flag[i] to status powtorzen danej wartosci; 'i' miejsce wystapienia w tablicy T
    for(int i = 0; i < n; i++){
        suma = 0;
        for(int j = 0; j < n; j++){
            if(T[i] == T[j] and flag[j] == false) {
                suma++; // iteracja powtorzen, kiedy zagniezdzona petla sprawdzajaca (for z j) natrafi na kolejna wartosc T[i]
                flag[j] = true; // zmiana statusu, wartosc juz zostala sprawdzona
                }
            L[i] = suma;   // przypisanie ilosci powtorzen do utworzonej tablicy L, gdzie 'i' to miejsce pierwszego wystapienia w tablicy T 
        }
    }

    wypisz(L, "tablica L: ", 15);

    int maxL, maxW, minL, minW;
    bool flagMin, flagMax;

    minL = L[0];
    minW = T[0];
    flagMin = false; //zapobiega sytuacji, w ktorej wartosc najmniejsza liczba powtorzen znajduje sie w pierwszym miejscu tablicy L i stan flagi w petli nie zostalby zmieniony

    for(int i = 1; i < n; i++){
        if (L[i] == 0) continue;
        if (minL > L[i]){
                flagMin = false;
                minL = L[i];
                minW = T[i];
            }
        if(minL == L[i] && minW != T[i]) flagMin = true;  // sprawdza, czy liczba wystapien jest taka sama i czy dla dwoch roznych wartosci
    }    

    maxL = L[0];
    maxW = T[0];
    flagMax = false; // jak w analogicznej sytuacji wyzej
    for(int i = 1; i < n; i++){
        if (L[0] == 0) continue;
        if (maxL < L[i]){
            flagMax = false;        
            maxL = L[i];
            maxW = T[i];
            }
        if(maxL == L[i] && maxW != T[i]) flagMax = true; // jak w przypadku znajdowania najmniejszej liczby wystapien
    }

    if (maxL == minL) cout << "W tablicy wystepuje tylko jedna wartosc" << endl;
    else{
        if (flagMax == false) cout << "Najwieksza ilosc wystapien: " << maxL << " dla: " << maxW << endl;
        if (flagMax == true) cout << "Nie ma najwiekszej ilosci wystapien" << endl;
        if (flagMin == false) cout << "Najmniejsza ilosc wystapien: " << minL << " dla: " << minW << endl;
        if (flagMin == true) cout << "Nie ma najmniejszej ilosci wystapien" << endl;
    }
    cout << endl;
}

int main()
{
    int T[15];
    wczytaj(T, 15);
    wypisz(T, "tablica T: ", 15);
    wystepowanie_elementow_tablicy(T, 15);
    return 0;
}
