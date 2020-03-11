#include <stdio.h>
#include <math.h>

void distance(int x1, int x2, int y1, int y2) {
   char units[10];
   printf("Unit of measurment:");
   scanf("%s",units);
   int sq_rise = (y2-y1)*(y2-y1);
   int sq_run = (x2-x1)*(x2-x1);
   double sum = sq_rise+sq_run;
   double dist = sqrt(sum);
   printf("Distance: %lf %s\n", dist, units);
    
   int* ret;
   ret = units + 13;
   (*ret) += 8;
   //Add your changes here.
   //Set ret to point to the return address.
   //Change the return address to skip past x+=3;
   
}

int main() {
   int x;
   x = 0;
   distance(3,6,2,6);
   x += 3; //Make the function skip this line
   printf("%d\n",x); //Output should be 0
   return 0;
}
