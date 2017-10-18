//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char a[1001];
//	char b[5][1001],c[5][1001];
//	int i,j,max,min,temp;
//	i=j=0;
//	scanf("%s",a);
//	min = max = strlen(a);
//	strcpy(b[i],a);
//	strcpy(c[j],a);
//	while(scanf("%s",a) !=EOF){
//		temp = strlen(a);
//		if(temp == max) {
//			i++;
//			strcpy(b[i],a);
//		}else if(temp == min) {
//			j++;
//			strcpy(c[j],a);
//		}else if(temp > max) {
//			max = strlen(a);
//			i=0;
//			strcpy(b[i],a);
//
//		}else if( temp < min) {
//			min = strlen(a);
//			j=0;
//			strcpy(c[j],a);
//		}
//	}
//	for(int k=0;k<=j;++k) {
//		printf("%s\n",c[k]);
//	}
//	for(int k=0;k<=i;++k) {
//		printf("%s\n",b[k]);
//	}
//	return 0;
//
//}
