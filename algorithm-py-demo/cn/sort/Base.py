'''
Created on 2016-6-11

@author: sonn
'''
from abc import ABCMeta, abstractmethod

class Base:

    __metaclass__ = ABCMeta
        
    @abstractmethod
    def sort(self):pass
         
    def less(self,v,w):
        return v.compareTo(w)
        
    def exch(self,arr,i,j):
        tmp = arr[i]
        arr[i] = arr[j]
        arr[j] = tmp
            
    def printArr(self,arr):
        for date in arr:
            print(date)
        