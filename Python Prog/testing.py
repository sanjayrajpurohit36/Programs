def isPrime(set_len):
    if(set_len == 2): 
        return true
    else:
        for i in range(2,set_len):
            if(set_len % i):
                return true
        return false

my_string = input("Enter a string: ")
split_list = list(my_string)
print("split list",split_list)
my_set= set([])
for x in (split_list):
    my_set.add(x)
if(isPrime(len(my_set))): 
    print("YES")
else:
    print("No")