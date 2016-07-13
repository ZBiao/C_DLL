/*********************************************
 * MyDLL.dll 以C编程的方式声明和实现相关函数，
 * 动态调用.dll文件
 *********************************************/

#include "stdio.h"
#include <stdlib.h>
#include "windows.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	typedef double(*FunctionAdd)(double,double);  //函数指针
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
 * MyDLL.dll 以C编程的方式声明和实现相关函数，
 * 静态的方式调用.dll文件
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