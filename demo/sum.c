void main() {
    int i, sum, a[5] = {99, 80, 81, 35, 92};

    sum = 0;
    for (i = 0; i < 5; i = i + 1) {
        sum = sum + a[i];
    }

    print(sum);
}

