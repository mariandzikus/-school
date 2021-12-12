print("Kamil Kumszczyński - Zad 6.7")
print("")

print(
    "Palindrom to ciąg znaków, który czytany od początku i od końca jest taki sam. Program sprawdza czy wpisany tekst jest palindromem.")

print("")

text = input("Wpisz tekst: ").replace(" ", "").upper()
revertedText = text[::-1].replace(" ", "").upper()

if (text == revertedText):
    print("Tekst jest palindromem")
else:
    print("Tekst NIE jest palindromem")
