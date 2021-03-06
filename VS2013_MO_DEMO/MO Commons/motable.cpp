// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "motable.h"

// Dispatch interfaces referenced by this interface
#include "MoRecordset.h"


/////////////////////////////////////////////////////////////////////////////
// CMoTable properties

CString CMoTable::GetUser()
{
	CString result;
	GetProperty(0x1, VT_BSTR, (void*)&result);
	return result;
}

void CMoTable::SetUser(LPCTSTR propVal)
{
	SetProperty(0x1, VT_BSTR, propVal);
}

CString CMoTable::GetPassword()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void CMoTable::SetPassword(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CString CMoTable::GetDatabase()
{
	CString result;
	GetProperty(0x3, VT_BSTR, (void*)&result);
	return result;
}

void CMoTable::SetDatabase(LPCTSTR propVal)
{
	SetProperty(0x3, VT_BSTR, propVal);
}

CString CMoTable::GetName()
{
	CString result;
	GetProperty(0x4, VT_BSTR, (void*)&result);
	return result;
}

void CMoTable::SetName(LPCTSTR propVal)
{
	SetProperty(0x4, VT_BSTR, propVal);
}

CMoRecordset CMoTable::GetRecords()
{
	LPDISPATCH pDispatch;
	GetProperty(0x6, VT_DISPATCH, (void*)&pDispatch);
	return CMoRecordset(pDispatch);
}

void CMoTable::SetRecords(LPDISPATCH propVal)
{
	SetProperty(0x6, VT_DISPATCH, propVal);
}

CString CMoTable::GetServer()
{
	CString result;
	GetProperty(0x5, VT_BSTR, (void*)&result);
	return result;
}

void CMoTable::SetServer(LPCTSTR propVal)
{
	SetProperty(0x5, VT_BSTR, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoTable operations

CMoRecordset CMoTable::SearchExpression(LPCTSTR expression)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		expression);
	return CMoRecordset(pDispatch);
}

CString CMoTable::GetVersion()
{
	CString result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CMoTable::SetVersion(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH CMoTable::GetCommand()
{
	LPDISPATCH result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}

void CMoTable::SetRefCommand(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

long CMoTable::GetMaxCachedRelateRecords()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CMoTable::SetMaxCachedRelateRecords(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}
