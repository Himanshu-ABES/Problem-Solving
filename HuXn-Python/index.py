# Extracting the digits using loop
# n = 571231
# count = 0
# num = n
# while num > 0:
#     # digit = num % 10
#     # print(digit)
#     num = num // 10

# Count the number of digits in a number
# n = 571231
# count = 0
# num = n
# while num > 0:
#     digit = num % 10
#     count += 1
#     num = num // 10
# print(f"Number of digits in {n} is: {count}")

# Another way to count the digits
# count = len(str(n))
# print(count)

# Check if a number is a palindrome
# n = 1234321
# num = n
# reversed = ""
# while num > 0:
#     digit = num % 10
#     reversed += str(digit)
#     num = num // 10
# if str(n) == reversed:
#     print(f"{n} is a palindrome")
# else:
#     print(f"{n} is not a palindrome")

# Check if a number is Armstrong
# n = 153
# num = n
# count = 0
# while num > 0:
#     digit = num % 10
#     count += pow(digit, len(str(n)))
#     num = num // 10
# if count == n:
#     print(f"{n} is an Armstrong number")
# else:
#     print(f"{n} is not an Armstrong number")

# Print all factors of a number
import math
n = 18
output = []
for i in range(1, int(math.sqrt(n)) + 1):
    if n % i == 0:
        output.append(i)
        if i != n // i:
            output.append(n // i)
output.sort()
print(f"Factors of {n} are: {output}")