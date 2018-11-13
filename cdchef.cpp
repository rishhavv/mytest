#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,cot=0,i=0;
unsigned long fact=1;;
cin>>n;
unsigned int a[n];
while(i<n)
{
cin>>a[i];
i++;
}
for(int j=0;j<n;j++)
 {
 fact=1;
 cot=0;
 for(int k=a[j];k>0;k--)
 {
 fact=fact*k;
 }
 while(true)
 {if(fact%10==0)
 {
 cot++;
 }
 else{
 break;}
 }
 cout<<cot;
 }
 return 0;
}
