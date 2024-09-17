#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int nilai[N];

    // Input nilai
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    // Mengurutkan nilai secara menaik
    sort(nilai, N);

    // Menampilkan output
    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}
