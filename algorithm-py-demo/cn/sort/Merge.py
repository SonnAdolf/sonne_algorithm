'''
@author sonne
@date Nov 23 2016
@func Merge Sort
'''

from Base import Base

class Merge():
	def __init__(self):
		self.tmp_arr = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

	def merge(self, arr, start, mid, end):
		for i in range(start, end+1):
			self.tmp_arr[i] = arr[i]
		j = mid + 1
		k = start
		for i in range(start, end+1):
			if k > mid:
				arr[i] = self.tmp_arr[j]
				j += 1
			elif j > end:
				arr[i] = self.tmp_arr[k]
				k += 1
			elif self.tmp_arr[j] < self.tmp_arr[k]:
				arr[i] = self.tmp_arr[j]
				j += 1
			else:
				arr[i] = self.tmp_arr[k]
				k += 1
	def sort(self, arr, start, end):
		if end <= start:
			return 
		mid = start + (end - start) / 2
		self.sort(arr, start, mid)
		self.sort(arr, mid + 1, end)
		self.merge(arr, start, mid ,end)
		
		
	
mobj = Merge()
arr = [5,3,4,7,1,9,0,4,2,6,8]
mobj.sort(arr, 0, len(arr)-1)
for i in range(len(arr)):
	print arr[i]
			
