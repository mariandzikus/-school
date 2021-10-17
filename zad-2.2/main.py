listOfElements = [1, 4, 6, 7, 8, 9, 3, 10, 1, 11, 3, 12, 3, 1, 13, 2, 14, 15, 1, 5, 3]

print("Kamil Kumszczyński - Zad 2.2")
print("")


number = int(input("Podaj liczbę "))
print("a) Liczba elementów o wartości", number, ":")
numberOfEvenElements = 0
for element in listOfElements:
  if element == number:
    numberOfEvenElements = numberOfEvenElements + 1

print(numberOfEvenElements)

print("")

print("b) Średnia arytmetyczna elementów listy")
sum = sum(listOfElements)
numberOfElements = len(listOfElements)

average = sum/numberOfElements

print(average)

print("")

print("c) Średnia arytmetyczna nieparzystych elementów listy:")
sum = 0
numberOfElements = 0

for element in listOfElements:
  if (element % 2) == 1:
    sum = sum + element
    numberOfElements = numberOfElements + 1

average = sum/numberOfElements

print(average)
