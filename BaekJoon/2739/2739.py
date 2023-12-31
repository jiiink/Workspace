number = int(input())

def mul(number: int):
    for i in range(1, 10):
        print(f"{number} * {i} = {number*i}")

mul(number)