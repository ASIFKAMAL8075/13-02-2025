#include<stdio.h>
int main(){
 int age;
printf("enter your age:");
scanf("%d",&age);
if(age<13){
 printf("you are a children.\n");
}else if(age>=13&&age<=19){
 printf("you are a teenager.\n");
}else if(age>=20&&age<=59){
 printf("you are an adult.\n");
}else{
 printf("you are a senior citizen.\n");
}
return 0;
} 
