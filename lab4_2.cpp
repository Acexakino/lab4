#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t){
	return u*t + 0.5*a*pow(t,2);
}

int main(){
	cout << "Test case 1: s = " << findDistance(0,0.5,1) << endl;
	cout << "Test case 2: s = " << findDistance(1.5,-1,2) << endl;
	cout << "Test case 3: s = " << findDistance(5,4,3) << endl;
	return 0;
}
