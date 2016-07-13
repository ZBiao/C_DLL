/*********************************************
 * MyDLL.dll ��C��̵ķ�ʽ������ʵ����غ�����
 * ��̬����.dll�ļ�
 *********************************************/

#include "stdio.h"
#include <stdlib.h>
#include "windows.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	typedef double(*FunctionAdd)(double,double);  //����ָ��
	FunctionAdd pAdd = NULL;

	HINSTANCE  hDll = LoadLibraryA("MyDLL.dll"); ;    
	
	if(NULL != hDll)
	{
		 pAdd =(FunctionAdd)GetProcAddress(hDll, "Add"); 
		 if(pAdd != 0)
		 { 			 
			 cout<<"Add(10.0,6.0) = "<<pAdd(10.0,6.0)<<endl;
			 system("pause");			
		 }	
	}
	FreeLibrary(hDll);
	return 0;	 
}


/*********************************************
 * MyDLL.dll ��C��̵ķ�ʽ������ʵ����غ�����
 * ��̬�ķ�ʽ����.dll�ļ�
 *********************************************/
//#include "MyDLL.h" 
//#pragma  comment (lib,"MyDLL.lib")
//
//int main(int argc, char * argv[])
//{
//	double ret = Add(10.0,6.0);
//	printf("%lf\n",ret);
//	system("pause");
//	return 0;	 
//}