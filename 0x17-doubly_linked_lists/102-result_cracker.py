#!/usr/bin/python3
def largest_palindrome_product(n: int):

    """
    Finds the largest palindrome made from
    the product of two n-digit numbers.
    """

    upper_limit = (10 ** n) - 1
    lower_limit = (upper_limit // 10) + 1

    max_product = 0

    for i in range(upper_limit, lower_limit - 1, -1):

        if i * i < max_product:
            break

        for j in range(i, lower_limit - 1, -1):

            product = i * j

            if product <= max_product:
                break

            reverse = reverse = int(str(product)[::-1])   # Alternate way to reverse product
            if product == reverse:
                max_product = product

    return max_product
print(largest_palindrome_product(3))    #  prints largest palindrome made from the product of two 3-digit numbers

