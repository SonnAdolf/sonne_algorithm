'''
Created on 2016-6-11

@author: sonn
'''

from cn.data.Date import Date
from cn.sort.Selection import Selection

def getArrForSortTest():
    date1 = Date(1992,7,11)
    date2 = Date(2001,7,12)
    date3 = Date(1777,6,13)
    date4 = Date(2001,7,11)    
    arr = [date1,date2,date3,date4]
    return arr

if __name__ == '__main__':
    arr = getArrForSortTest()
    selection = Selection()
    selection.sort(arr)
    selection.printArr(arr)

    