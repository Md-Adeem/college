def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def generate_prime_pattern(n):
    primes = []
    num = 2
    while len(primes) < n:
        if is_prime(num):
            primes.append(num)
        num += 1

    current_line = []
    for prime in primes:
        current_line.append(prime)
        if len(current_line) == len(primes):
            print(", ".join(map(str, current_line)))
        elif len(current_line) % 2 == 0:
            print(", ".join(map(str, current_line)), end=", ")
            current_line = []

n = int(input("Enter the number of lines: "))
generate_prime_pattern(n)
