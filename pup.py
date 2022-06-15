def wprowadzenie():
    pass


if __name__ == '__main__':
    wszystko = ""
    while not 10 < len(wszystko)/2+1 < 1000000:
        wszystko = input("Podaj moc uczestników (od 1 do 1000000): ")
    tab = wszystko.split(" ")
    print(tab)
