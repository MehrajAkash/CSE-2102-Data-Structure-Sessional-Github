def myfunc(arr,size):
    
    for i in range(1,size):
        insertIndex = i
        currentValue = arr.pop(i)
        j = i-1

        while (j>=0 and arr[j] > currentValue):
            arr[j+1] = arr[j]
            insertIndex = j
            j = j-1

        arr.insert(insertIndex,currentValue)



myarr = [3,5,8,11,21,44]

myfunc(myarr,len(myarr))

print(myarr)