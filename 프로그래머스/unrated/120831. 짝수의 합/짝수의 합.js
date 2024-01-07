function solution(n) {
    let a = Math.trunc(n/2);
    let answer = a * (a + 1);
    return answer;
}