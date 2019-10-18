1. #include<iostream>
using namespace std;
inline int add(int x, int y)
{
    return (x)+(y);
}
int main()
{
    int x, y, sum;
    cout<<"请输入x和y的值"<<endl;
    cin>>x>>y;
    sum=add(x, y);
    cout<<sum;
    return 0;
}
2. #include<iostream>
using namespace std;
inline double square(float r)
{
    return r*r*3.14;
}
inline double length(float r)
{
    return 2*3.14*r;
}
int main()
{
    float r;
    cout<<"请输入圆的半径r=";
    cin>>r;
    cout<<endl;
    cout<<"圆的周长为"<<length(r)<<endl;
    cout<<"圆的面积为"<<square(r)<<endl;

    return 0;
}
3. #include<iostream>
using namespace std;
int main()
{
    int *ptr,a=0,b=0;
    ptr = new int[20];
    cout << "请输入含有20个数字的数组：";
    for (int i = 0; i < 20; i++)
        cin >> ptr[i];
    for (int i = 0; i < 20; i++)
    {
        if (ptr[i] < 0)
            a++;
        if (ptr[i] > 0)
            b++;
    }
    cout << "该数组负数个数为：" << a;
    cout << "该数组整数个数为：" << b;
    return 0;
}
4. #include<iostream>
using namespace std;
double checkAgeScore(int age, double score)
{
    if (age<16||age>25) throw age;
    if (score<0||score>5) throw score;
    return score;
}
int main()
{
    char a[10];
    cout<<"请输入学生姓名：";
    cin>>a;
    int age = 0;
    double score = 0;
    cout<<"请输入学生成绩";
    cin>>score;
    cout<<"请输入学生年龄：";
    cin>>age;

    try
   {
       checkAgeScore(age, score);
    }
   catch (int)
    {
        cout<<"Wrong age!"<<endl;
        cout<<"please put in the right age:";
        cin>>age;
     }
    try
    {
        checkAgeScore(age, score);
    }
    catch (double)
    {
        cout<<"Wrong score!"<<endl;
        cout<<"please put in the right score:";
        cin>>score;

    }
   cout<<"calculate finished."<<endl;
   cout<<a<<" "<<age<<" "<<100*(score/5)<<endl;
   return 0;
   }
