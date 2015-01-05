#if !defined(AFX_MOADDRESSLOCATION_H__66598E04_68E7_4C34_BDAA_6AA84BEB0346__INCLUDED_)
#define AFX_MOADDRESSLOCATION_H__66598E04_68E7_4C34_BDAA_6AA84BEB0346__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoPoint;

/////////////////////////////////////////////////////////////////////////////
// CMoAddressLocation wrapper class

class CMoAddressLocation : public COleDispatchDriver
{
public:
	CMoAddressLocation() {}		// Calls COleDispatchDriver default constructor
	CMoAddressLocation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoAddressLocation(const CMoAddressLocation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	CMoPoint GetLocation();
	void SetLocation(LPDISPATCH);
	short GetMatchScore();
	void SetMatchScore(short);
	long GetStreetSide();
	void SetStreetSide(long);

// Operations
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOADDRESSLOCATION_H__66598E04_68E7_4C34_BDAA_6AA84BEB0346__INCLUDED_)
