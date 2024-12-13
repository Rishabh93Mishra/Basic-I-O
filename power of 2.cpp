// Find exact power of 2 using bitwise operator 
#include<stdio.h>
int main(){
int num;

printf("Enter the number :\n");
scanf("%d",&num);
if(num>0&&(num&(num-1))==0){
	printf("%d is a power of 2\n",num);
} else{
	printf("%d is not a power of 2",num);
}
return 0;
}
