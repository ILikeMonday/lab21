#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};
double Nnut=0;
double overlap(Rect *R1,Rect *R2){
double x1_max=max(R1->x,R2->x);
double x2_min=min(R1->x+R1->w,R2->x+R2->w);
double y3_min=min(R1->y,R2->y);
double y4_max=max(R1->y-R1->h,R2->y-R2->h);
double overlap1 = max(x2_min-x1_max,Nnut);
double overlap2 = max(y3_min-y4_max,Nnut);
return overlap2 * overlap1;
}


