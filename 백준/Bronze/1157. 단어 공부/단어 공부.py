array = input().upper()
array_list = list(set(array))
count_list = []

for i in array_list:
    count = array.count(i)
    count_list.append(count)
    
if count_list.count(max(count_list)) >= 2:
    print("?")
else:
    print(array_list[count_list.index(max(count_list))])