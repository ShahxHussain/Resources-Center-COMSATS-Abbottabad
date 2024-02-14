def cumsum(int_list):

    new_list = []
    cum_sum = 0
    for num in int_list:
        cum_sum += num
        new_list.append(cum_sum)
    print(new_list)

cumsum([1,2,3])
