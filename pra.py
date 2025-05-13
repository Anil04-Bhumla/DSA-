# def max_hp(t, test_cases):
#     for case in test_cases:
#         n, x, h = case
#         h.sort()

#         max_hp = 0
#         decrement = (n - 1) * x

#         for i in range(1,n):
#             current_hp = h[i] + decrement
#             max_hp = min(max_hp, current_hp)
#             decrement -= 1

#         print(max_hp)  
        

# t = int(input()) 
# test_cases = []

# for _ in range(t):
#     n, x = map(int, input().split())  
#     h = list(map(int, input().split())) 
#     test_cases.append((n, x, h))

# max_hp(t, test_cases)
def max_hp(t, test_cases):
    for case in test_cases:
        n, x, h = case
        h.sort()

        max_hp = float('inf')  
        decrement = (n - 1) * x

        for i in range(n): 
            current_hp = h[i] + decrement
            max_hp = min(max_hp, current_hp)  
            decrement -= x  

        print(max_hp)


t = int(input("enter the nuber")) 
test_cases = []

for _ in range(t):
    n, x = map(int, input().split())  
    h = list(map(int, input().split())) 
    test_cases.append((n, x, h))

max_hp(t, test_cases)
