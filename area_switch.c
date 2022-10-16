
#include<stdio.h>
int main(){
    char area;
    printf("enter shape for area:");
    scanf("%c",&area);//p-paraleogram, t-trapezoid,r-rhombus,s-sphere,e-elipse
     switch(area){
        case 'p': { int p_base;
                  printf("enter the base of parallelogram:");
                  scanf("%d",& p_base);
                  int p_height;
                  printf("enter the height of parallelogram:");
                  scanf("%d",& p_height);
                  printf("the area of parallelogram is:%d\n",p_base*p_height);
                  }
                  //break;
        case 't': {int t_lbase;
                  printf("enter the longer base of trapezoid:");
                  scanf("%d",& t_lbase);
                  int t_sbase;
                  printf("enter the shorter base of trapezoid:");
                  scanf("%d",& t_sbase);
                  int t_height;
                  printf("enter the height of the trapezoid:");
                  scanf("%d",& t_height);
                  printf("the area of trapezoid is:%d\n",((t_lbase+t_sbase)/2)*(t_height));
                  }   
                  //break; 
        case 'r': {int d1;
                  printf("enter the first daigonal:");
                  scanf("%d",&d1);
                  int d2;
                  printf("enter the second diagonal:");
                  scanf("%d",&d2);
                  printf("the area of rhombus is:%d\n",(d1*d2));
                  }        
                  //break;  
        case 's': {float radius;
                  printf("enter the value of radius:");
                  scanf("%f",&radius);
                  float pi=3.14;
                  printf("the area of sphere is:%f\n",4*(pi*radius*radius)); 
                  }
                  //break;                           
        case 'e': {float majr;
                  printf("enter the major radius:");
                  scanf("%f",&majr);
                  float minr;
                  printf("enter the minor radius:");
                  scanf("%f",&minr);
                  float pi=3.14;
                  printf("the area of elipse is:%f\n",(pi*(majr*minr)));
                  }
                  break;
        default: printf("enter correct shape for area \n thank you");  
     }        
    return 0;



}
