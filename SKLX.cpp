#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c ;                                  		//定义变量c、a、f的值
    int a ;
    float f ;
    cin>>c>>a>>f ;                           		//输入变量c、a、f的值
    a=a+c;
    f=f+2*a;
    cout<<setiosflags(ios::fixed);
    cout<<"c="<<c<<"  a="<<a<<"  f="<<setprecision(1)<<f<<endl ;  	//输出变量c、a、f的值
    return 0;
}
#include <stdio.h>
int main()
{   char c;                            	/*定义变量c、a、f */
    int a;
    float f;
    scanf("%c%d%f",&c,&a,&f);             	/*输入变量c、a、f的值*/
    a=a+c;
    f=f+2*a;
    printf("c=%c a=%d  f=%.1f\n",c,a,f);      	/*输出变量c、a、f的值*/
    return 0;
}

#include <iostream>
using namespace std;    		//using声明使用一个完整的名字空间std，C++中提供的名字
//空间std涵盖了所有标准C++的定义和声明
const int M = 200;
namespace one          		//定义一个名字空间one，里面有1个常量M和1个变量inf
{
  const int M = 200;
  int inf = 10;
}                   		//后面未加分号
namespace two         		//定义一个名字空间two，里面有2个变量：x和inf
{
 int x;
 int inf = -100;
 }                   		//后面未加分号
using namespace two;   		//方法1：using声明使用一个完整的名字空间one
int  main()
{
    using two::x;       		//方法3：using声明仅使用名字空间two中的内容x
    x = -100;            		//直接访问，相当于two::x=-100;
    cout<<inf<<endl;    		//using声明使用了整个one，其所有成员直接访问
    cout<<M<<endl;
    two::inf *= 2;         		//方法2：使用名字空间名::局部内容名操作未使用using声明的内容
    cout<<two::inf<<endl; 	//同样是two中的内容，但是访问方式不一样
    cout<<x<<endl;      	//已用using声明了two中内容x，可以直接访问


    return  0;
}

 //example2_01.cpp：名字空间使用示例
#include <iostream>
using namespace std;
namespace one
{
const int M = 200;
int inf = 10;
 }
 namespace two
{
int x;
int inf = -100;
}
using namespace one;
int  main()
{
    using two::x;
    x=-100;
    cout<<inf<<endl;
    cout<<one::M<<endl;
    two::inf *=2;
    cout<<two::inf<<endl;
    cout<<x<<endl;
    getchar();
    return  0;
}

 //example2_07.cpp
#include <iostream>
using namespace std;
void Fun(int i, int j=5, int k=10);
int main()
{
Fun(20);
Fun(20,30);
Fun(20,30,40);
getchar();
return 0;
}
void Fun(int i, int j, int k)
{
	cout<<i<<"  "<<j<<"  "<<k<<endl;
}

 //example2_07.cpp  参数改为int i=1,int j=5,int k=10
#include <iostream>
using namespace std;
void Fun(int i=1, int j=5, int k=10);
int main()
{
	Fun(20);

	Fun(20,30);
	Fun(20,30,40);
	getchar();
	return 0;
}
void Fun(int i, int j, int k)
{
	cout<<i<<"  "<<j<<"  "<<k<<endl;
}

//example2_08_1.cpp
using namespace std;
#define  Multiply(x,y)  (x)*(y)
int  main()
{
	int a = Multiply(3+4,2+3);
	cout<<"a="<<a<<endl;
	getchar();
	return 0;
}

//example2_09.cpp
#include <iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
float square(float x)
{
    return x*x;
}
double square(double x =1.5)
{
    return x*x;
}
int main()
{
    cout<<"square()="<<square()<<endl;
    cout<<"square(10)="<<square(10)<<endl;
    cout<<"square(2.5f)="<<square(2.5f)<<endl;
    cout<<"square(1.1)="<<square(1.1)<<endl;
    return 0;
}

//example2_10.cpp
#include <iostream>
using namespace std;
int x =5, y =10;
int &r=x ;
void print()
{
    cout<<"x="<<x<<" y="<<y <<" r="<<r<<endl;
    cout<<"Address of x "<<&x<<endl;
    cout<<"Address of y "<<&y<<endl;
    cout<<"Address of r "<<&r<<endl;
}
int main()
{
    print();
    r = y;
    y =100;
    print();
    x =200;                                    ֵ
    print();
    getchar();
    return 0;
}

//example2_11.cpp
#include <iostream>
using namespace std;
void swap(int x, int &y)

{
    int t =x;
    x=y;
    y=t;
}
int main()
{
    int a =3, b =5, c =10, d =20;
    cout<<"a="<<a<<"  b="<<b<<endl;
    swap(a, b);
    //int &x=a; int &y=b;
    cout<<"a="<<a<<"  b="<<b<<endl;
    cout<<"c="<<c<<"  d="<<d<<endl;
    swap(c, d);
    //int &x=c; int &y=d;
    cout<<"c="<<c<<"  d="<<d<<endl;
    getchar();
    return 0;
}

//example2_13.cpp
#include <iostream>
using namespace std;
int& Fun(const int &x, int &y, int z)
{
    z++;
    y =x+y+z;
    return y;
}
int main()
{
    int a = 1, b = 2, c = 3, d = 0;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    Fun(a, b, c);
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    d = Fun(a, b, c);
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    Fun(a, b, c) = 20;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    getchar();
    return 0;
}
//example2_14.cpp
#include <iostream>
using namespace std;
int main()
{
    void *vp;
    char c = 'A';
    short int x = 97;
    vp = &c;
    cout<<*(char *)vp<<"  "<<*(short int*)vp<<endl;
    vp = &x;

    cout<<*(short int *)vp<<"  "<<*(char*)vp<<endl;
    //cout<<*vp<<endl;
    getchar();
    return  0;
}
