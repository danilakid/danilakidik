# модуль призначено для роботи з зовнішніми файлами
# читання та виведення для візуального контролю


def get_indicators():
    """читання файла валюти `indicators`
    та формування списку валюти 
    повертає список валют
    """
    # накопичення даних файлу у списку 
    with open("./data/indicators.csv", 'r') as f:
         indicators = f.readlines()

    # підготовка даних для подальшої обробки
    indicators_splitted =[]
    # порізати в циклі строки на окремі елементи 
    for indicator in indicators:
        obj = split_line(indicator)
        obj[0] = str(obj[0])
        indicators_splitted.append(obj)
            
    return indicators_splitted

def split_line(line):
    """повертає список обєктів з строки"""
    object=line.split(',')
    return object


def get_directorys():
    """читання файла валюти `directirys`
    та формування списку валюти 
    повертає список валют
    """
    # накопичення даних файлу у списку 
    with open("./data/directory.csv", 'r') as f:
         directory = f.readlines()

    # підготовка даних для подальшої обробки
    directorys_splitted =[]
    # порізати в циклі строки на окремі елементи 
    for directory in directory:
       obj = split_line(directory)
       obj[0] = str(obj[0])
       directorys_splitted.append(obj)
            
    return directorys_splitted



# вивід списку підприемств 
def show_indicators(indictators):
    """виводить додаток підприємств по задоному інтервалу кодів
    """

    # задати інтервал кодів
    indictator_code_from = str(input("З якого кода підприємства?"))
    indictator_code_to = str(input("До якого кода підприємства?"))

    # відбір списку додвідників підприємств
    filtered_indictators = []
    for indictator in indictators:
        if indictator_code_from  <= indictator[0] <= indictator_code_to:
            filtered_indictators.append(indictator)  

    
    # вивід відбраних підприємств
    print("Основні показники")
    for indictator in filtered_indictators:
        print(f'підприємство:{indictator[0]:20} код показника:{indictator[1]:20} базовий рік:{indictator[2]:25} попередній рік {indictator[3]:30}поточний рік {indictator[4]:35}' )


    if len(filtered_indictators) == 0:
        print("В списку підприеємств немає таких кодів")
        return

    
 


# вивід списку підприемств 
def show_directorys(directorys):
    """виводить довідник показників діяльності підприємств кодів
    """

    # задати інтервал кодів
    directorys_code_from = str(input("З якого кода довідника?"))
    directorys_code_to = str(input("До якого кода довідника?"))

    # відбір списку додвідників підприємств
    filtered_directorys = []
    for directory in directorys:
        if directorys_code_from  <= directory[0] <= directorys_code_to:
            filtered_directorys.append(directory)  

    
    # вивід відбраних підприємств   
    print("Основні показники")
    for directory in filtered_directorys:
        print(f'код показника:{directory[0]:15} назва показника:{directory[1]:20} одиниця виміру:{directory[2][:-1]:25}' )


    if len(filtered_directorys) == 0:
        print("В списку підприеємств немає таких кодів")
        return

    

 




# вивід списку накладних 


if __name__ == '__main__':
    indicators = get_indicators()
    directorys = get_directorys()
    show_indicators(indicators) 
    show_directorys(directorys) 
    pass   

