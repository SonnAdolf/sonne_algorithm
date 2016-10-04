'''
@author sonn
@date Sep 20 2016
@func Shell sort
      If you want to solve a data-sort problem,but do not have a sorting libarary to use
         you can pay the utmost attention to Shell 
'''
from Base import Base

class Shell(Base):
	def sort(self, arr):
		N = len(arr)
		h = 1
		while h < N/3:
			h = 3*h + 1
		while h >= 1:
			for i in range(h,N):
				j = i
				while j >= h and self.less(arr[j], arr[j-h]) < 0:
					self.exch(arr, j, j-h)
					j = j -h	
			h = h / 3
	 
