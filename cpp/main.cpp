#include <iostream>
#include <math.h>
#include<locale>
using namespace std;
double xf(double x,double y) {
	return sin(x+y)+0.1-1.5*x;
}
double dxx(double x, double y) {
	return cos(x+y)-1.5;
}
double dxy(double x, double y) {
	return cos(x+y);
}
double yf(double x,double y) {
	return x*x+y*y-1;
}
double dyx(double x) {
	return 2*x;
}
double dyy(double y) {
	return 2*y;
}
void method(double x,double y, double eps) {
	int k=1;
	double xprev,yprev,xcurr=x,ycurr=y,delta1,delta2,J;
	while(fabs(yprev-ycurr)>eps || fabs(xprev-xcurr)>eps) {
		xprev=xcurr;
		yprev=ycurr;
		J=dxx(xprev,yprev)*dyy(yprev)-dxy(xprev,yprev)*dyx(xprev);
		delta1=xf(xprev,yprev)*dyy(yprev)-yf(xprev,yprev)*dxy(xprev,yprev);
		delta2=dxx(xprev,yprev)*yf(xprev,yprev)-xf(xprev,yprev)*dyx(xprev);
		xcurr = xprev-delta1/J;
		ycurr = ycurr - delta2/J;
		cout<<"x["<<k<<"]="<<xcurr<<"\t"<<"y["<<k<<"]="<<ycurr<<endl;
		k++;
	}
	cout<<"Корiнь: ("<<xcurr<<";"<<ycurr<<") при початковому наближеннi("<<x<<";"<<y<<")"<<endl;
}
int main(int argc, char** argv) {
	setlocale(LC_ALL,"rus");
	double x0=0.5,y0=1;
	double eps=0.001;
	method(x0,y0,eps);
	x0=-0.7;
	y0=-0.6;
	method(x0,y0,eps);
	return 0;
}
