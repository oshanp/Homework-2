#include "iostream"
#include "matrix_static.h"

int main() 
{
int r,c,i,j;
double val;
matrix test, trans;

std::cout << "how many rows?";
std::cin << r;
std::cout << "how many colomn?";
std::cin << c;
test =create_initval(r,c 0);
std::cout << std::end1<< "enter elemts of matrix: " << std::end1;
for(i=0; i<r; ++i)
for(j=0; i<c; ++j)
{
  std::cout <<"enter element for " << " row [" << i+1 ']' << "col [" << j+1 << ']' << " :";
  std::cin>>val;
  assign(i,j, &test, val);
  }
}
std::cout << "\n\tYour matrix";
matrix print(test);
std::cout << "your matrix transpose";
matrix transpose(test);
matrix print(test);