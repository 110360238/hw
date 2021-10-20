#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int k, p, m, s, c, t;
	printf("每天行駛路程\n");
	scanf_s("%d", &k);
	printf("每加侖汽油的價格\n");
	scanf_s("%d", &p);
	printf("每加侖汽油行駛里程數\n");
	scanf_s("%d", &m);
	printf("每天的停車費\n");
	scanf_s("%d", &s);
	printf("每天的過路費\n");
	scanf_s("%d", &c);
	t = (k / m)*p + s + c;
	printf("總共省下%d元\n", t);
	system("pause");
	return 0;

}