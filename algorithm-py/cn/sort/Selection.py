'''
Created on 2016-6-11

@author: sonn
'''
from cn.sort.Base import Base

class Selection(Base):
    
    def sort(self,arr):
        arrLen = len(arr)
        for i in range(0,arrLen-1):
            min = i
            for j in range(i + 1, arrLen - 1):
                if(self.less(arr[j], arr[min]) < 0):
                    min = j
            self.exch(arr, i, min)

            
