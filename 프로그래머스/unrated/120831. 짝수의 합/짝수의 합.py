def solution(n):
    answer = 0
    half_n = int(n/2)
    answer = half_n * (half_n + 1)
    return answer