#include <stdio.h>

char pole_name(int p) {
    if (p == 0) return 'A';
    if (p == 1) return 'B';
    return 'C';
}

int fix_pos(int p) {
    while (p < 0) p += 3;
    while (p >= 3) p -= 3;
    return p;
}

int main(void) {
    int n;
    int cnt;
    int total = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        total = total * 2;
    }
    total = total - 1;

    for (cnt = 1; cnt <= total; cnt++) {
        int temp = cnt;
        int disk = 1;
        int moveCnt;
        int dir;
        int from;
        int to;

        while (temp % 2 == 0) {
            disk++;
            temp = temp / 2;
        }

        moveCnt = (temp + 1) / 2;

        if ((n - disk + 1) % 2 == 1) {
            dir = -1;
        } else {
            dir = 1;
        }

        from = fix_pos(dir * (moveCnt - 1));
        to = fix_pos(dir * moveCnt);

        printf("%d 번 원반을 %c에서 %c로 이동\n",
               disk, pole_name(from), pole_name(to));
    }

    return 0;
}
