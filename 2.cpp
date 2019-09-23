#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;
void fangcheng()
{
    cout<<"请输入方程的系数："<<endl;
    float a,b,c,x1,x2,Q;
    cin>>a>>b>>c;
    Q=b*b-4*a*c;
    if(Q<0)
    {

        cout<<"该方程无解";
    }
    else if(Q>0)
    {
        Q=sqrt(Q);
        x1=(-b-Q)/2*a;
        x2=(-b+Q)/2*a;
        cout<<"该方程有两个不相等的根"<<x1<<" "<<x2;

    }
    else
    {
        x1=x2=(-b)/2*a;
        cout<<"该方程有两个相同的根"<<x1;
    }

}
void traingle()
{
    cout<<"请输入三边边长"<<endl;
    float a,b,c,S,D;
    cin>>a>>b>>c;
    D=(a+b+c)/2;
    S=sqrt(D*(D-a)*(D-b)*(D-c));
    cout<<"该三角形的面积为"<<S;
}

int date()
{
	int year, month, day, days = 0,j=0;
	int flag;
	int a[7] = { 1,3,5,7,8,10,12 };
	cout << "请输入按顺序输入要查询的年份、月份和日期：" << endl;
	cin >>year >> month >> day;
	for (int i = 1; i <month; i++)
	{
		if (i == 2)
		{
			if (year % 4 == 0)
				days += 29;
			else
				days += 28;
		}
		else if (i == a[j])
		{
			days += 31;
			j++;
		}
		else
			days += 30;
	}

	days = days + day;
	cout << "这是今年第" << days << "天"<<endl;

	cout << "这是今年第" << days / 7 + 1 <<"周" <<endl;

	getchar();
	return 0;
}



int main()
{
    fangcheng();
    traingle();
    date();
    return 0;
}
