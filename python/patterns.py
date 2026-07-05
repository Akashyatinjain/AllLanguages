def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def reverse_number(n):
    return int(str(n)[::-1])

fibonacci(5)