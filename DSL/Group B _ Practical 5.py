# SORTING
Marks = []
n = int(input("Enter no. of students : "))
for i in range(0, n):
    m = int(input("Enter marks : "))
    Marks.append(m)
print("List is : ")
print(Marks)

# INSERTION SORT
for i in range(1, n):
    temp = Marks[i]
    j = i - 1
    while j>=0 and Marks[j] > temp:
        Marks[j+1] = Marks[j]
        j = j - 1
    Marks[j+1] = temp
print("Sorted list is : ")
print(Marks)

# SHELL SORT

