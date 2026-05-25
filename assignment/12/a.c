#include <stdio.h>

// 0: A, 1: B, 2:C
char pole(int p) {
    if (p == 0) return 'A';
    if (p == 1) return 'B';
    return 'C';
}

int main(void) {
    int n;
    int total = 1;

    scanf("%d", &n);
	
	// 하노이의 탑 이동 시행횟수
    for (int i = 0; i < n; i++) {
        total *= 2;
    }
    total--;
	
	//각 시행횟수에 어떤 이동이 발생하는지 역산햇음.
    for (int cnt = 1; cnt <= total; cnt++) {
        int temp = cnt;
        int disk = 1;
        int moveCnt;
        int dir;
        int from;
        int to;

        while (temp % 2 == 0) {
            disk++;
            temp /= 2;
        }

        moveCnt = (temp + 1) / 2;

        if ((n - disk + 1) % 2 == 1) {
            dir = -1;
        } else {
            dir = 1;
        }

        from = dir * (moveCnt - 1);
        to = dir * moveCnt;

		// -1, 4 등 문제 생기는거 고치기 위함
        from %= 3;
        to %= 3;

        if (from < 0) from += 3;
        if (to < 0) to += 3;

        printf("%d 번 원반을 %c에서 %c로 이동\n",
               disk, pole(from), pole(to));
    }

    return 0;
}
