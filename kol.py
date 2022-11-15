wejscie = input().split(" ")
m = int(wejscie[0])
p = int(wejscie[1])
n = int(wejscie[2])
wejsciep = []
wejscien = []
wonsz = [(0, 0)]
for i in range(1, p+1):
    wejsciep.append(input().split(" "))
for i in range(p+1, p+n+1):
    wejscien.append(input().split(" "))
plansza = []
for i in range(0, m):
    plansza.append([])
    for mn in range(0, m):
        plansza[i].append(None)
for i in range(0, len(wejsciep)):
    plansza[int(wejsciep[i][0])-1][int(wejsciep[i][1])-1] = wejsciep[i][2]
plansza[0][0] = "0"
for i in range(0, len(wejscien)):
    if wejscien[i][0] == "Z":
        if (int(wejscien[i][1]) - 1, int(wejscien[i][2]) - 1) in wonsz:
            print(plansza[int(wejscien[i][1]) - 1][int(wejscien[i][2]) - 1])
        else:
            print(-1)
    else:
        if wejscien[i][0] == "G":
            wonsz.append((wonsz[-1][0] - 1, wonsz[-1][1]))
        elif wejscien[i][0] == "D":
            wonsz.append((wonsz[-1][0] + 1, wonsz[-1][1]))
        elif wejscien[i][0] == "L":
            wonsz.append((wonsz[-1][0], wonsz[-1][1] - 1))
        else:
            wonsz.append((wonsz[-1][0], wonsz[-1][1] + 1))
        if not plansza[wonsz[-1][0]][wonsz[-1][1]]:
            for mn in range(1, len(wonsz)):
                plansza[wonsz[len(wonsz)-mn][0]][wonsz[len(wonsz)-mn][1]]=plansza[wonsz[len(wonsz)-mn-1][0]][wonsz[len(wonsz)-mn-1][1]]
                plansza[wonsz[len(wonsz) - mn - 1][0]][wonsz[len(wonsz) - mn - 1][1]] = None
            wonsz.pop(0)
