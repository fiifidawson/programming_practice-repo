def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    
    return (fibonacci(n-1) + fibonacci(n-2))






user_input = int(input("Enter the fibonacci number: "))
print(fibonacci(user_input))