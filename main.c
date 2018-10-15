#include <stdio.h>


 void add(int a, int b){
	return (a+b);
 }
 void sustract(int a, int b){
	 return (a-b);
 }
 void multiply(int a, int b){
	 return (a*b);
 }
int main() {

  printf("Hello World\n");
  printf(add(1,2));
  printf(sustract(1,2));
  printf(multiply(1,2));
  return 0;

}


