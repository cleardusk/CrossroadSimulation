// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "mogeodatasets.h"


/////////////////////////////////////////////////////////////////////////////
// CMoGeoDatasets properties

short CMoGeoDatasets::GetCount()
{
	short result;
	GetProperty(0x1, VT_I2, (void*)&result);
	return result;
}

void CMoGeoDatasets::SetCount(short propVal)
{
	SetProperty(0x1, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoGeoDatasets operations

LPDISPATCH CMoGeoDatasets::Item(const VARIANT& Item)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms,
		&Item);
	return result;
}
