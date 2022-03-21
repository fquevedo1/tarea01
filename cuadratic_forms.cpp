#include<iostream>
#include<cmath>

double form1_plus(double a, double b, double c);
double form1_minus(double a, double b, double c);
double form2_plus(double a, double b, double c);
double form2_minus(double a, double b, double c);

int main(){
  std::cout.precision(7); std::cout.setf(std::ios::scientific);
  double a=1.0;
  double b=1.0;
  double c=1.0;
  std::cout<<"c \t  x1 \t x2 \t x1'\t x2' \n";
  for(int n=0;n<=10;n++){
    c=std::pow(10,-n);
    std::cout<<c<<"\t"<<form1_plus(a,b,c)<<"\t"<<form1_minus(a,b,c)<<"\t"<<form2_plus(a,b,c)<<"\t"<<form2_minus(a,b,c)<<"\n";
  }
  return 0;
}

double form1_plus(double a, double b, double c){

  double res=(-b+std::sqrt(pow(b,2)-4*a*c))/(2*a);
    return res;
}

double form1_minus(double a, double b, double c){

  double res=(-b-std::sqrt(pow(b,2)-4*a*c))/(2*a);
    return res;
}

double form2_plus(double a, double b, double c){

  double res=(-2*c)/(b+std::sqrt(pow(b,2)-4*a*c));
    return res;
}

double form2_minus(double a, double b, double c){

  double res=(-2*c)/(b-std::sqrt(pow(b,2)-4*a*c));
    return res;
}
