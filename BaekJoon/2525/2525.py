def output(hour, minute):
    print(hour, minute)

def oven(h, m, c):
    hour = (h + ((m+c)//60)) % 24
    minute = (m+c) % 60
    return hour, minute

def user_input():
    hour, minute = input().split()
    cook = int(input())
    hour = int(hour)
    minute = int(minute)
    return hour, minute, cook

def main():
    hour, minute, cook = user_input()
    oven_hour, oven_minute = oven(hour, minute, cook)
    output(oven_hour, oven_minute)

main()