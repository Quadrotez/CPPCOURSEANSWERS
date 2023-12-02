import os
while True:
    count = int(input('Введите кол-во файлов: '))
    for i in range(1, count + 1):
        with open(f'{i}.cpp', 'w') as f:
            f.write('')
