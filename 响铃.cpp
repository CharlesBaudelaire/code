#include <iostream>

#include <Windows.h>  // 用 Sleep 需要添加此头文件
using namespace std;
int main()
{
for (int j = 1; j<=3; j++)
{
cout << '\a' << "响铃"<<j<<'\n';
Sleep(1000);
}

        system("pause");  // 添加时间延迟，不然响得过快你就听不到，就好像没响一样

return 0;
}
