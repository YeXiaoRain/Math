#include<iostream>
#define ZHU 15
#define PAN 30
using namespace std;

int val[PAN][ZHU]={0};
int minn(int num1,int num2)
{
	return num1<num2?num1:num2;
}
void init (int zhuzi){
	int i;
	for(i=3;i<=zhuzi;i++)
		val[1][i]=1;
}
void printtitle(int num)
{
	int i;
	cout<<"0";
	for(i=3;i<=num;i++)
		cout<<"|"<<i;
	cout<<endl;
	for(i=3;i<=num;i++)
		cout<<"-|";
	cout<<"-"<<endl;
}
/*
int check_hannou(int p,int zhuzi){
	if(zhuzi<=1)
		return -1;
	if(zhuzi==2)
	{
		if(p==1)
			return 1;
		return -1;
	}
	return 0;
}*/
int hannou(int p,int zhuzi){
	/*if(p==0)
		return -1;*/
	if(val[p][zhuzi]!=0)
		return val[p][zhuzi];
	if(zhuzi==3){
		val[p][zhuzi]=2*hannou(p-1,3)+1;
		return val[p][zhuzi];
	}
	val[p][zhuzi]=2*hannou(p-1,zhuzi)+1;
	int k;
	for(k=1;k<p;k++){
		val[p][zhuzi]=minn(val[p][zhuzi],2*hannou(k,zhuzi)+hannou(p-k,zhuzi-1));
	}
		
	return val[p][zhuzi];
}
int main()
{
	int size=ZHU-1;
	init(size);
	printtitle(size);
	int i,j;
	for(i=1;i<PAN;i++)
	{
		cout<<i;
		for(j=3;j<=size;j++)
			cout<<"|"<<hannou(i,j);
		cout<<endl;
	}
	return 0;
}
