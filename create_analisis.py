"""Модуль призначено для формування аналазізу ...
яка формується з файлів 'clients` та `orders' """

from data_servise import get_directorys,get_indicators

TITLE = "\n\n Аналіз основних показників діяльності підприємств"
HEADER = \
"""
================================================================================================================================
Назва показника     :   Одиниця виміру  :    Підприємство  :    Базовий рік :  Попередній рік :  Поточний рік  :   Відхилення  :
================================================================================================================================
"""
indicators = get_indicators()
directorys = get_directorys()

def find_directory_name(directory_code):
    """шукає в шукає в довіднику одиниці виміру"""


    for directory in directorys:
        if directory_code == directory[0]:
            return directory[1]

    return "нема назви"

def str_to_num(str_num):
        """перетворює строкове чісло в число"""
        if str_num.isnumeric():
            return int(str_num)
        else:
            return int(str_num[:-1]) 
    

def show_analis(analisis):
    """вивід результатів на екран"""
    print(TITLE)
    print(HEADER)
    for  row in analis:
        print(row['nazva pokaznika'], 
        row['enterise'], 
        row['bazoviy rik'],
        row['poperedny rik'],  
        row['potoshniy rik'], 
        row['vidhilenya'], 
        row['vimir'])
       
    

analis = {
    'nazva pokaznika'   :'',      # назва показника                  (directorys)
    'vimir'             :'',      # одиниці вимірювання              (direcrotys)
    'enterprise'        :'',      # підприемство                     (indicators)
    'bazoviy rik'       :'',      # базовий рік                      (indicators)
    'poperedniy rik'    :'',      # попередній рік                   (indicatorss)
    'potoshniy '        :'',      # поточний рік                     (inbdicators)
    'vidhilenya 1'      :'',      # відхилення                       (potoshniy rik - bazoviy rik)
    'vidhilenya 2'      :'',      # відхилення                       (potoshniy rik - poperedniy rik) 
}



analisis=[]
for indicator in indicators:
    analis['nazva pokaznika'] = find_directory_name(indicator[0])
    analis['vimir'] = indicator[1]
    analis['enterise'] = indicator[2]
    analis['bazoviy rik'] = indicator[3]
    analis['poperedny rik'] = indicator[4] 
    analis['potoshniy '] = indicator[4]
    analis['vidhilenya absolut 1'] = (str_to_num(indicator[4] - str_to_num(indicator[3])))
    analis['vidhilenya absolut 2']= (str_to_num (indicator[4]-str_to_num(indicator[2])))
    
    
    
    analisis.append(analis)




pass














