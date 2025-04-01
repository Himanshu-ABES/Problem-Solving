n = 5

# Pattern 1
# for i in range(n):
#     for j in range(n):
#         print("*", end="")
#     print()

# Pattern 2
# for i in range(n):
#     for j in range(i + 1):
#         print("*", end="")
#     print()

# Pattern 3
# for i in range(n):
#     for j in range(i + 1):
#         print(j + 1, end="")
#     print()

# Pattern 4
# for i in range(n):
#     for j in range(i + 1):
#         print(i + 1, end="")
#     print()

# Pattern 5
# for i in range(n):
#     for j in range(n - i):
#         print("*", end="")
#     print()

# Pattern 6
# for i in range(n):
#     for j in range(n - i):
#         print(j + 1, end="")
#     print()

# Pattern 7
# for i in range(n):
#     for j in range(n - i):
#         print(" ", end="")
#     for k in range(2 * i + 1):
#         print("*", end="")
#     print()

# Pattern 8
# for i in range(n):
#     for j in range(i + 1):
#         print(" ", end="")
#     for k in range(2 * (n - i) - 1):
#         print("*", end="")
#     print()

# Pattern 9
# for i in range(n):  # Upper Half
#     for j in range(n - i):
#         print(" ", end="")
#     for k in range(2 * i + 1):
#         print("*", end="")
#     print()
# for i in range(n):  # Lower Half
#     for j in range(i + 1):
#         print(" ", end="")
#     for k in range(2 * (n - i) - 1):
#         print("*", end="")
#     print()

# Pattern 10
for i in range(2 * n - 1):
    stars = i + 1 if i < n else 2 * n - i - 1
    for j in range(stars):
        print("*", end="")
    print()
