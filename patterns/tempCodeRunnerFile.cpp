t i = 1, n = 5;
    while(i <= n) {
        int stars = n - i;
        while(stars) {
            cout << '*';
            stars--;
        }

        int j = 1;
        while(j <= n) {
            cout << ' ';
            j++;
        }
        cout << '\n';
        i++;
    }