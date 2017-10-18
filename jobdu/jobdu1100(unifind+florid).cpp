//#include <stdio.h>
//#include <stdlib.h>
//int ranka[100] ;//记录每个树的深度
//int father[100];//记录每个点的父节点
//int d[100][100];//记录各对间的距离
//void Initset(int n)//初始化，将每个点的父节点设为自己，深度为1
//{
//	int i;
//	for(i = 0;i<n;i++){
//		ranka[i]=1;
//		father[i] = i;
//		d[i][i]=0;
//	}
//}
//int FindSet(int x)//找到每个点的父节点，并将这个点的父节点设置为数的根节点
//{
//	if(x!=father[x])
//		father[x] = FindSet(father[x]);
//	return father[x];
//}
//void Unionset(int a,int b)//合并树，
//{
//	int x = FindSet(a);
//	int y = FindSet(b);
//	if(x==y)//如果两个节点的父节点（树的根节点）是同一个，无需合并，直接跳过
//		return;
//	if(ranka[x] >= ranka[y]){
//		ranka[x] += ranka[y];
//		father[y] = x;
//	}
//	else {
//		ranka[y] += ranka[y];
//		father[x] = y;
//	}//不是同一个树的的节点，小树合并到大树
//}
//int mod(int a,int b)//取模
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
//			if(a==b)//二者已在同一个连通分量，距离定是最小了
//				continue;
//			dist = mod(2,i);//取模
//			for(j=0;j<n;j++)//更新两个连通分量的各对经过中间对的距离
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
