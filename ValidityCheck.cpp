���֤ȷ����Ч��

���㷽���༭
1����ǰ������֤����17λ���ֱ���Բ�ͬ��ϵ�����ӵ�һλ����ʮ��λ��ϵ���ֱ�Ϊ��7 9 10 5 8 4 2 1 6 3 7 9 10 5 8 4 2 ��
2������17λ���ֺ�ϵ����˵Ľ����ӣ�
3���üӳ����ͳ���11���������Ƕ��٣�
4������ֻ������0 1 2 3 4 5 6 7 8 9 10��11�����֡���ֱ��Ӧ�����һλ���֤�ĺ���Ϊ1 0 X 9 8 7 6 5 4 3 2��
5��ͨ�������֪���������2���ͻ������֤�ĵ�18λ�����ϳ����������ֵ�X��



//C++  	
#include "iostream.h"
using namespace std;
#define chartonumber(x) (x-'0')

bool IsIdNumRight(string idNum)
{
bool Rtn = false;
if(idNum.length() !=18)
	return Rtn;


int coefficient[] = {7, 9, 10, 5, 8, 4, 2, 1, 6,3, 7, 9, 10, 5, 8, 4, 2};
int MulToatl = 0;
for (int i = 0; i < 17; i++)
{
	MulToatl +=  chartonumber(idNum[i]) * coefficient[i];
}
int remainder = MulToatl % 11;
char RemCorrTable[] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};


if (idNum[17] == RemCorrTable[remainder])
	Rtn = true;

return Rtn;
}