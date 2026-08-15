# include<stdio.h>
int main(){
int y,x,sum,i;
float avg;
sum=0,i=1;
while(i<=10){
printf("enter %d number :",i);
scanf("%d",&x);
sum=sum+x;
i=i+1;
}
y=sum;
printf(" total is %d\n",y);
avg=sum/10;
printf("avg =%f",avg);\
 return 0;
}