n = [12, 3, 4, 5, 6, 7, 8, 9, 10]
n.sort(reverse=True)
search = 5
print("Sorted Array:", n)
for i in range(len(n)):
    if n[i] == search:
        print("Element found at index", i)
        break
else:
    print("Element not found")