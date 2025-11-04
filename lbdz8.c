#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int N;
	double sum = 0.0;
	printf("¬ведите число N:");
	scanf("%d", &N);
	if (N <= 0) {
		printf("ќшибка: N должно быть положительным числом");
		return 1;
	}
	for (int i = 1; i <= N; ++i) {
		sum += 1.0 / i;
	}
	printf("=%.6f", sum);
	return 0;


}