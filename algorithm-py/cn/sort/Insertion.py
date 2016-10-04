'''
@author sonn
@date Sep 19 2016
@func Insertion sort
'''
from Base import Base
#from cn.sort.Base import Base

class Insertion(Base):
	def sort(self, arr):
		for i in range(1, len(arr)):
			j = i
			while j > 0 and self.less(arr[j], arr[j - 1]) < 0:
				self.exch(arr, j, j - 1)
				j -= 1 
		
