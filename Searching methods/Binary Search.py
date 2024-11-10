
def binarySearch(myarr,mytarget,size):
    left = 0
    right = size-1

    while(left <= right):
        mid = (left+right)//2
        
        if(myarr[mid] == mytarget):
            return mid
        
        elif(myarr[mid] < mytarget):
            left = mid+1

        else:
            right = mid-1

    return False       



myarr = [3,5,8,11,21,44]
mytarget = 44
size = len(myarr)
print('len: ',size)
result = binarySearch(myarr,mytarget,size)

if result != False:
    print(mytarget," Found at index ", result)
else:
    print("Not found")    