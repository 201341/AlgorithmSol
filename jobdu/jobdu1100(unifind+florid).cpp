//#include <stdio.h>
//#include <stdlib.h>
//int ranka[100] ;//��¼ÿ���������
//int father[100];//��¼ÿ����ĸ��ڵ�
//int d[100][100];//��¼���Լ�ľ���
//void Initset(int n)//��ʼ������ÿ����ĸ��ڵ���Ϊ�Լ������Ϊ1
//{
//	int i;
//	for(i = 0;i<n;i++){
//		ranka[i]=1;
//		father[i] = i;
//		d[i][i]=0;
//	}
//}
//int FindSet(int x)//�ҵ�ÿ����ĸ��ڵ㣬���������ĸ��ڵ�����Ϊ���ĸ��ڵ�
//{
//	if(x!=father[x])
//		father[x] = FindSet(father[x]);
//	return father[x];
//}
//void Unionset(int a,int b)//�ϲ�����
//{
//	int x = FindSet(a);
//	int y = FindSet(b);
//	if(x==y)//��������ڵ�ĸ��ڵ㣨���ĸ��ڵ㣩��ͬһ��������ϲ���ֱ������
//		return;
//	if(ranka[x] >= ranka[y]){
//		ranka[x] += ranka[y];
//		father[y] = x;
//	}
//	else {
//		ranka[y] += ranka[y];
//		father[x] = y;
//	}//����ͬһ�����ĵĽڵ㣬С���ϲ�������
//}
//int mod(int a,int b)//ȡģ
//{
//	int ret =1;
//	while(b--)
//		ret=(ret*a)%100000;
//	return ret;
//}
//int main()
//{
//	int n,m,dist;
//	int x,y,a,b;
//	int i,j,k;
//	while(scanf("%d%d",&n,&m)!=EOF)
//	{
//		Initset(n);
//		for(i=0;i<m;i++)
//		{
//			scanf("%d%d",&x,&y);
//			a=FindSet(x);
//			b=FindSet(y);
//			if(a==b)//��������ͬһ����ͨ���������붨����С��
//				continue;
//			dist = mod(2,i);//ȡģ
//			for(j=0;j<n;j++)//����������ͨ�����ĸ��Ծ����м�Եľ���
//			{
//				if(a!=FindSet(j))
//					continue;
//				for(k=0;k<n;k++)
//				{
//					if(b!=FindSet(k))
//						continue;
//					d[j][k]=d[k][j]=(d[j][x]+dist+d[y][k])%100000;
//				}
//			}
//			Unionset(x,y);
//		}
//		x=FindSet(0);
//		for(i=1;i<n;i++)
//			if(FindSet(i)!=x)
//				printf("-1\n");
//			else
//				printf("%d\n",d[0][i]);
//	}
//}
