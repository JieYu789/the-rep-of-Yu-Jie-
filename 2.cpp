#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;
void fangcheng()
{
    cout<<"�����뷽�̵�ϵ����"<<endl;
    float a,b,c,x1,x2,Q;
    cin>>a>>b>>c;
    Q=b*b-4*a*c;
    if(Q<0)
    {

        cout<<"�÷����޽�";
    }
    else if(Q>0)
    {
        Q=sqrt(Q);
        x1=(-b-Q)/2*a;
        x2=(-b+Q)/2*a;
        cout<<"�÷�������������ȵĸ�"<<x1<<" "<<x2;

    }
    else
    {
        x1=x2=(-b)/2*a;
        cout<<"�÷�����������ͬ�ĸ�"<<x1;
    }

}
void traingle()
{
    cout<<"���������߱߳�"<<endl;
    float a,b,c,S,D;
    cin>>a>>b>>c;
    D=(a+b+c)/2;
    S=sqrt(D*(D-a)*(D-b)*(D-c));
    cout<<"�������ε����Ϊ"<<S;
}

int date()
{
	int year, month, day, days = 0,j=0;
	int flag;
	int a[7] = { 1,3,5,7,8,10,12 };
	cout << "�����밴˳������Ҫ��ѯ����ݡ��·ݺ����ڣ�" << endl;
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
	cout << "���ǽ����" << days << "��"<<endl;

	cout << "���ǽ����" << days / 7 + 1 <<"��" <<endl;

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
