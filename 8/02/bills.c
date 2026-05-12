int bill10000;
int bill5000;
int bill1000;

void calculate_bill(int n) {
    bill10000 = n / 10000;
    n %= 10000;

    bill5000 = n / 5000;
    n %= 5000;

    bill1000 = n / 1000;
}
