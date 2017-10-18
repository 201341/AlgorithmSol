//#include <stdio.h>
//
//int main(){
//	char name[200][100];
//	int a[200],b[200];
//	int n;
//	scanf("%d",&n);
//	while(n--) {
//		int num,h,m,s,first = 1,last = 1;
//		scanf("%d",&num);
//		for(int i=1;i<=num;++i) {
//			scanf("%s",name[i]);
//			scanf("%d:%d:%d",&h,&m,&s);
//			a[i] = 3600*h+60*m+s;
//			scanf("%d:%d:%d",&h,&m,&s);
//			b[i] = 3600*h+60*m+s;
//			if(a[i] < a[first]) first = i;
//			if(b[i] > b[last]) last = i;
//		}
//		printf("%s %s\n",name[first],name[last]);
//	}
//	return 0;
//}