//函数
//有返回值的函数和没有返回值的函数
//有返回值的函数会生成一个值，会赋值给变量或在其他表达式中使用
//转换一英石等于十四磅`
//打个比方，我给你一个正方形的边长，叫你计算出这个正方形的面积给我，然后你根据面积公式计算出了面积交给我，这个面积就是返回值，而你计算的方法就是函数，我给的正方形的边长就是参数
#include <iostream>
#include <math.h>
using namespace std;
int zhuanhuann(int shiying)
{

	return 14 * shiying;
}
int main()
{
	cout << "请输入：" << endl;
	int shiying;
	cin >> shiying;
	cout << "现在转换了是：" <<zhuanhuann(shiying)<<endl;
}
