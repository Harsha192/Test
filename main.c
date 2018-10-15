#include <stdio.h>


 int add(int a, int b){
	return (a+b);
 }
 int sustract(int a, int b){
	 return (a-b);
 }
 int multiply(int a, int b){
	 return (a*b);
 }

 float devide(int a, int b){
	 return (a/b);
 }
 int remain(int a, int b){
	 return (a%b);

 boolean odd(int a){
	 return (a/2)==0 ? false : true;
 }
int main() {

  printf("Hello World\n");
  printf(add(1,2));
  printf(sustract(1,2));
  printf(multiply(1,2));
  printf(devide(1,2));
  printf(remain(1,2));
  printf(odd(5))
  return 0;

}


