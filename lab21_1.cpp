#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};
double Nnut=0;
double overlap(Rect R1,Rect R2){
double x1_max=max(R1.x,R2.x);
double x2_min=min(R1.x+R1.w,R2.x+R2.w);
double y3_min=min(R1.y,R2.y);
double y4_max=max(R1.y-R1.h,R2.y-R2.h);
double overlap1 = max(x2_min-x1_max,Nnut);
double overlap2 = max(y3_min-y4_max,Nnut);
cout << overlap1 << " " << overlap2 << "\n";
return overlap2 * overlap1;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};	
cout << overlap(R1,R2);	

return 0;

}
