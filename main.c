#include <stdio.h>
#include <Windows.h>
#define MOD 12345

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    if (n < 1 || n > 10000) {
        printf("Довжина послідовності має бути в межах від 1 до 10000.\n");
        return 1;
    }

    int dp[n + 1];

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;


    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }


    printf("Кількість шуканих послідовностей: %d\n", dp[n]);
    return 0;
}
