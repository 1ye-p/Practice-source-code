// CreateRemoteThread_Test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "InjectDll.h"
#include "AdjustTokenPrivilegesTest.h"


int _tmain(int argc, _TCHAR* argv[])
{
	// ������ǰ��������Ȩ��
	EnbalePrivileges(::GetCurrentProcess(), SE_DEBUG_NAME);
	// Զ�߳�ע�� DLL
#ifndef _WIN64
	BOOL bRet = CreateRemoteThreadInjectDll(2016, "C:\\Users\\Ccai\\Desktop\\TestDll.dll");
#else 
	BOOL bRet = CreateRemoteThreadInjectDll(6628, "C:\\Users\\Ccai\\Desktop\\TestDll.dll");
#endif
	
	if (FALSE == bRet)
	{
		printf("Inject Dll Error.\n");
	}
	printf("Inject Dll OK.\n");
	system("pause");
	return 0;
}

