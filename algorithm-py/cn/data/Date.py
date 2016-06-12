'''
Created on 2016-6-11

@author: sonn
'''

class Date:

    def __init__(self,year,month,day):
        self.__day = day
        self.__month = month
        self.__year = year
        
    def compareTo(self,that):
        if self.__year > that.__year:
            return 1
        if self.__year < that.__year:
            return -1
        if self.__month > that.__month:
            return 1
        if self.__month < that.__month:
            return -1
        if self.__day > that.__day:
            return 1
        if self.__day < that.__day:
            return -1
        return 0
    
    def __repr__(self):
        return str(self.__year) + "-" + str(self.__month) + "-" + str(self.__day)
    

        