//# include <stdio.h>
//
//int main(void)
//{
//	int n, h, m, count;
//	double total;
//	int leave[101], back[101];
//	char a;
//	char flag1[101], flag2[101];
//
//	while (scanf("%d", &n) != EOF && n != -1)
//	{
//		total = 0, count = 0;
//		while (n)
//		{
//			scanf(" %c %d:%d", &a, &h, &m);
//			if(a == 'S')
//			{
//				leave[n] = h*60 +m;
//				flag1[n] = 'S'; 
//			}
//			else
//			{
//				back[n] = h*60 +m;
//				flag2[n] = 'E'; 
//			}
//			if (flag1[n] == 'S' && flag2[n] == 'E')
//			{
//				count++;
//				total += back[n] - leave[n];
//				flag1[n] = flag2[n] =' ';
//			}
//			scanf("%d", &n);
//		}
//		scanf(" %c %d:%d", &a, &h, &m);
//		if (count)
//			total = total/count;
//		printf("%d %.0f\n", count, total);
//	}
//
//	return 0;
//}