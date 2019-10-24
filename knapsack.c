#include<stdio.h>

int main()
{
int p[7]={10,5,15,7,6,18,3};
int w[7]={2,3,5,7,1,4,1};
float p_pre_w[7];
int i;
for(i=0;i<7;i++)
{
p_pre_w[i]=p[i]/w[i];

}
for(i=0;i<7;i++)
{
for(int j=0;j<7-i-1;j++)
{int s,s2,s3;
if(p_pre_w[j]<p_pre_w[j+1])
{
s=p_pre_w[j];
p_pre_w[j]=p_pre_w[j+1];
p_pre_w[j+1]=s;

s2=p[j];
p[j]=p[j+1];
p[j+1]=s2;

s3=w[j];
w[j]=w[j+1];
w[j+1]=s3;
}
}
}
int sum=0,m=15;
i=0;
while(m>0 && w[i]<=m)
{
m=m-w[i];
//printf("%d ",m);
printf("profit %d,weight %d \n",p[i],w[i]);
sum=sum+p[i];
i=i+1;

}
sum=sum+m*(p[i]/w[i]);
printf("sum = %d",sum);
}















