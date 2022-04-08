T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, C = int(temp[0]), int(temp[1])
    candy = [int(x) for x in input().split(" ")]

    if sum(candy) <= C:
        print("YES")
    else:
        print("NO")
