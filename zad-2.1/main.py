listOfElements = [1, 4, 6, 7, 8, 9, 3, 10, 1, 11, 3, 12, 1, 13, 2, 14, 15, 1, 5, 3]

print("Kamil Kumszczyński - Zad 2.1")
print("")

print("a) Elementy listy:")
for element in listOfElements:
  print(element)

print("")

print("b) Liczba parzystych elementów:")
numberOfEvenElements = 0
for element in listOfElements:
  if (element % 2) == 0:
    numberOfEvenElements = numberOfEvenElements + 1

print(numberOfEvenElements)

print("")

print("c) Elementy mniejsze od 5 zwiększamy o 2")
for i in range(len(listOfElements)):
  if listOfElements[i] < 5:
    listOfElements[i] = listOfElements[i] + 2

print("")

print("d) Iloczyn elememntów o wartości 3:")
productOfElements = 1
for element in listOfElements:
  if element == 3:
    productOfElements = productOfElements * element

print(productOfElements)

print("")

print("e) Suma elementów podzielnych przez 3:")
numberOfEvenElementsBy3 = 0
for element in listOfElements:
  if (element % 3) == 0:
    numberOfEvenElementsBy3 = numberOfEvenElementsBy3 + element

print(numberOfEvenElementsBy3)
