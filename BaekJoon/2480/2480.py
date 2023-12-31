dices = input().split()

def dice(dices: list) -> int:
    item = dict()
    for dice in dices:
        item[dice] = item.get(dice, 0) + 1
    
    if len(item) == 1:
        return 10000 + int(max(item)) * 1000
    elif len(item) == 2:
        for i in item:
            if item[i] == 2:
                value = int(i)
        return 1000 + value * 100
    else:
        return int(max(item)) * 100
            
print(dice(dices))