#include <iostream>

#include <Windows.h>  // �� Sleep ��Ҫ��Ӵ�ͷ�ļ�
using namespace std;
int main()
{
for (int j = 1; j<=3; j++)
{
cout << '\a' << "����"<<j<<'\n';
Sleep(1000);
}

        system("pause");  // ���ʱ���ӳ٣���Ȼ��ù���������������ͺ���û��һ��

return 0;
}
