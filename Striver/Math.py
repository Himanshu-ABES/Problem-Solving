# Given an integer n, count the number of digits in n.
# n = 123456
# count = 0
# while n > 0:
#     n = n // 10
#     count += 1
# print(count)

# Reverse a number
# n = 123456
# reverse = 0
# while n > 0:
#     last_digit = n % 10
#     reverse = reverse * 10 + last_digit
#     n = n // 10
# print(reverse)

# Check if a number is palindrome
# n = 12345
# original_n = n
# reverse = 0
# while n > 0:
#     rem = n % 10
#     reverse = reverse * 10 + rem
#     n = n // 10
# print("original:", original_n)
# print("reverse:", reverse)
# if original_n == reverse:
#     print("Palindrome")
# else:
#     print("Not Palindrome")

# Greatest common divisor
# a = 10
# b = 15
# for i in range(min(a, b), 0, -1):
#     if a % i == 0 and b % i == 0:
#         print(i)
#         break

# Checking whether a number is Armstrong or not
# n = 153
# original_n = n
# sum = 0
# while n > 0:
#     last_digit = n % 10
#     sum += last_digit ** 3
#     n = n // 10
# if sum == original_n:
#     print("Armstrong")
# else:
#     print("Not Armstrong")

# Divisor of the number
# n = 12
# for i in range(1, n + 1):
#     if n % i == 0:
#         print(i)

# Check for Prime
n = 9
if n == 1:
    print("Not Prime")
else:
    for i in range(2, n):
        if n % i == 0:
            print("Not Prime")
            break
    else:
        print("Prime")
