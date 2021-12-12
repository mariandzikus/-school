print("Kamil Kumszczyński - Zad 6.6")
print("")

text = input("Wpisz tekst: ")

print("Wyrazy o nie parzystej liczbie znaków zaczynające się na literę P:")

for word in text.split():
    if (word[0].upper() == "P" and (len(word) % 2) == 1):
        print(word)
