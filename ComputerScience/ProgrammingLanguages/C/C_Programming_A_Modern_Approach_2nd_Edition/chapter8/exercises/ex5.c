int fib_numbers[40] = {0, 1};

for (int i = 2; i < (int)(sizeof(fib_numbers) / sizeof(fib_numbers[0])); i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
}
