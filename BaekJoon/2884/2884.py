hour, minute = input().split()
hour = int(hour)
minute = int(minute)

def early_alarm(hour, minute):
    m = 0
    h = 0
    if minute < 45:
        m = 60 + minute - 45
        if hour == 0:
            h = 23
        else:
            h = hour - 1
    else:
        m = minute - 45
        h = hour
    print(f"{h} {m}")
    
early_alarm(hour, minute)
