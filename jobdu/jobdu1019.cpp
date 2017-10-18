//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	double val;
//	char ch;
//	while(scanf("%lf%c",&val,&ch) == 2 && fabs(val) > 1e-6) {
//		double data[200],sum = 0;
//		char op;
//		int top =-1;
//		data[++top] = val;
//		while(scanf("%c%lf%c",&op,&val,&ch) == 3) {
//			if(op == '+'){
//				data[++top] = val;
//			}else if(op == '-'){
//				data[++top] = -val;
//			}else if( op == '*'){
//				data[top] *= val;
//			}else if(op == '/') {
//				data[top] /= val;
//			}
//			if(ch == '\n') {
//				break;
//			}
//		}
//		while(top != -1){
//			sum += data[top--];
//		}
//		printf("%.2lf\n",sum);
//	}
//	return 0;
//}