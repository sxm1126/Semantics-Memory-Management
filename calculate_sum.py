def calculate_sum(arr):
    total = o            # NameError at runtime: name 'o' is not defined
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum (numbers)
print("Sumin Python :", result)  # Typo acceptable, but spacing is fine
