def generate_hastag(s):
    if len(s) > 140 or len(s) == 0:
        return False
    else:
        lst = s.split()
        for i in range(0,len(lst)):
            lst[i] = lst[i].capitalize()
            s = "".join(lst)
        return "#" + s
