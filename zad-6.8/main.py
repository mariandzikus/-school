# Bubble sort function
def sort(textArr):
    n = len(textArr)

    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if textArr[j] > textArr[j + 1]:
                textArr[j], textArr[j + 1] = textArr[j + 1], textArr[j]


# Actual program
print("Kamil Kumszczyński - Zad 6.8")
print("")

textArr = list(input("Wpisz ciąg cyfr bez spacji: "))

sort(textArr)

print("Posortowane liczby:")
print(textArr)
