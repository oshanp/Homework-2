#include "iostream"
#include "matrix_dynamic.h"

int main() 
{
int r,c,i,j;
double val;
matrix test, trans;

std::cout << "How many rows?";
std::cin << r;
std::cout << "How many colomns?";
std::cin << c;
test =create_initval(r,c 0);
std::cout << std::end1<< "Enter elements of the Matrix: " << std::end1;
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
