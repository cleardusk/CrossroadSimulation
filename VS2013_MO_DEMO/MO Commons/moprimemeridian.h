#if !defined(AFX_MOPRIMEMERIDIAN_H__AF3A723A_8F43_4E65_B9C5_0C4EBFA85374__INCLUDED_)
#define AFX_MOPRIMEMERIDIAN_H__AF3A723A_8F43_4E65_B9C5_0C4EBFA85374__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMoPrimeMeridian wrapper class

class CMoPrimeMeridian : public COleDispatchDriver
{
public:
	CMoPrimeMeridian() {}		// Calls COleDispatchDriver default constructor
	CMoPrimeMeridian(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoPrimeMeridian(const CMoPrimeMeridian& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	long GetType();
	void SetType(long);
	CString GetName();
	void SetName(LPCTSTR);
	double GetLongitude();
	void SetLongitude(double);

// Operations
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOPRIMEMERIDIAN_H__AF3A723A_8F43_4E65_B9C5_0C4EBFA85374__INCLUDED_)
