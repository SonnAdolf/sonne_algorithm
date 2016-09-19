'''
Created on 2016-6-11

@author: sonn
'''

import sys
BASE_PATH = '/home/sonn/coding/algorithm/algorithm-py/cn/'
sys.path.append(BASE_PATH + 'data/')
sys.path.append(BASE_PATH + 'sort/')

from Date import Date
from Selection import Selection
from Insertion import Insertion
#from cn.data.Date import Date
#from cn.sort.Selection import Selection


def getArrForSortTest():
    date1 = Date(1992,7,11)
    date2 = Date(2001,7,12)
    date3 = Date(1777,6,13)
    date4 = Date(2001,7,11)    
    arr = [date1,date2,date3,date4]
    return arr

if __name__ == '__main__':
    arr = getArrForSortTest()
	
    #selection = Selection()
    #selection.sort(arr)
    #selection.printArr(arr)
	
    insertion = Insertion()
    insertion.sort(arr)
    insertion.printArr(arr)
    
