def input_list():
    # first list
    for i in range(number_of_input):
        num = int(input())
        list1.append(num)
    
    # second list
    for i in range(number_of_input):
        num = int(input())
        list2.append(num)

def sync_list():
    ## 1. sort both list
    ## 2. id both of the sorted list
    ## 3. id the first unsorted list with the id from the first sorted list
    ## 4. arrange the second sorted list the same as the first unsorted list id
    
    list1_sorted = list(list1)
    list2_sorted = list(list2)
    list1_id = {}
    list2_id = {}
    list1_id_unsorted = []
    list2_result = []
    
    # sort both list (ascending)
    list1_sorted.sort()
    list2_sorted.sort()
    
    # id both the sorted list
    for i, num in enumerate(list1_sorted):
        list1_id[i] = num
    for i, num in enumerate(list2_sorted):
        list2_id[i] = num
    
    # id the first unsorted list with the id from the first sorted list
    for i, num in enumerate(list1):
        for j, num2 in enumerate(list1):
            if list1_id[j] == num:
                list1_id_unsorted.append(j)
    
    # arrange the second sorted list with the same id of the first unsorted list
    for i, num in enumerate(list2_sorted):
        num_list2 = list2_sorted[list1_id_unsorted[i]]
        list2_result.append(num_list2)
    
    return list2_result

## THERE'S GOTTA BE A BETTER WAY TO DO THIS

# first run
number_of_input = int(input())

list1 = []
list2 = []

input_list()
result_list = sync_list()

for i in result_list:
    print(i)

# loop run
while(True):
    number_of_input = int(input())

    list1 = []
    list2 = []

    if number_of_input == 0:
        break
    else:
        print()

    input_list()
    result_list = sync_list()
    
    for i in result_list:
        print(i)
