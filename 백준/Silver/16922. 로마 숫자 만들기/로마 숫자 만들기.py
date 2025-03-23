N = int(input())
number = [1, 5, 10, 50] # 로마자 배열
numberList = []
sumList = [0] * 1001 # 로마자의 합이 담기는 배열 (1 <= N <= 20이니, 인덱스가 1000까지 필요함)


def backtrack(depth, num):
    try:
        if depth == N:
            sumList[sum(numberList)] = 1
            return

        for i in range(num, 4):
            numberList.append(number[i])
            backtrack(depth + 1, i)
            numberList.pop()
    except:
        print(len(sumList))


backtrack(0, 0)
print(sum(sumList))