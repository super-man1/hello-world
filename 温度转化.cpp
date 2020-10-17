//华氏温度=1.8*摄氏温度+32
#include <iostream>
using namespace std;
int zhuanhua(int s) //参数就是摄氏度 
{
	return  1.8 * s + 32;//返回值  结果
}
int main()
{
	cout << "请输入一个摄温度：" << endl;
	int s;//设置一个变量 摄氏度
	cin >> s;//再让用户生成一个数字（摄氏度）
	cout << zhuanhua(s) << endl;//调用这个函数
}