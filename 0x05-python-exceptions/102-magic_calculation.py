#!/usr/bin/python3
def magic_calculation(a, b):
    answer = 0
    for k in range(1, 3):
        try:
            if k > a:
                raise Exception('Too far')
            answer += a ** b / k
        except Exception:
            answer = b + a
            break
    return answer
