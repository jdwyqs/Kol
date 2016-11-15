#include<stdio.h>
int main()
{
	int a[100], ave, j,sum,k;
	for (int i = 0; i <= 99; ++i)
		a[i] = 2 * (i + 1);
	int n, m;
	while ((scanf("%d%d", &n, &m)) != EOF)
	{
		sum = n;
		k = m;
		for (; n / m > 0; n -= m)
		{
			ave = 0;
			for (j=0; j < k; ++j)
			{
				ave += a[j];
			}
			k = j + m;
			ave = ave / m;
			printf("%d ", ave);
		}
		if (n>0)
		{
			ave = 0;
			for (; k < sum; ++k)
			{
				ave += a[k];
			}
			ave = ave / (sum%m);
			printf("%d\n", ave);
		}
	}
	return 0;
}