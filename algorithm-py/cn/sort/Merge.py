'''
@author sonne
@date Nov 23 2016
@func Merge Sort
'''

from Base import Base

class Merge():
	def merge(self, arr, lo, mid, hi):
		tmp_arr = []
		for i in range(lo, hi+1):
			tmp_arr.append(arr[i])
		j = mid + 1
  		k = lo
		for i in range(lo, hi+1):
			if k > mid:
				arr[i] = tmp_arr[j]
				j += 1
			elif j > hi:
				arr[i] = tmp_arr[k]
				k += 1
			elif tmp_arr[j] < tmp_arr[k]:
				arr[i] = tmp_arr[j]
				j += 1
			else:
				arr[i] = tmp_arr[k]
				k += 1
	def sort(self, arr, lo, hi):
		if hi <= lo:
			return 
		mid = lo + (hi - lo) / 2
		self.sort(arr, lo, mid)
		self.sort(arr, mid + 1, hi)
		self.merge(arr, lo, mid ,hi)
		
		
	
mobj = Merge()
arr = [2,6,8,10,22,33,35,1,3,9,11,14,15,18,20]
for i in range(0, 15):
	print arr[i]
mobj.merge(arr, 0, 6, 14)
print arr
arr = [5,3,4,7,1,9,0,4,2,6,8]
mobj.sort(arr, 0, len(arr)-1)
for i in range(len(arr)):
	print arr[i]
			
