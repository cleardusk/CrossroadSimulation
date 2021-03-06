#if !defined(AFX_MOGEOCODER_H__38A6C06E_483F_4758_AF9D_34D861A3123D__INCLUDED_)
#define AFX_MOGEOCODER_H__38A6C06E_483F_4758_AF9D_34D861A3123D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMoStandardizer;
class CMoGeoDataset;
class CMoStrings;
class CMoAddressLocation;

/////////////////////////////////////////////////////////////////////////////
// CMoGeocoder wrapper class

class CMoGeocoder : public COleDispatchDriver
{
public:
	CMoGeocoder() {}		// Calls COleDispatchDriver default constructor
	CMoGeocoder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMoGeocoder(const CMoGeocoder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:
	BOOL GetValid();
	void SetValid(BOOL);
	short GetCandidateCount();
	void SetCandidateCount(short);
	double GetSqueezeFactor();
	void SetSqueezeFactor(double);
	double GetOffset();
	void SetOffset(double);
	CString GetMatchRules();
	void SetMatchRules(LPCTSTR);
	short GetMatchVariableCount();
	void SetMatchVariableCount(short);
	CMoStandardizer GetStandardizer();
	void SetStandardizer(LPDISPATCH);
	CMoGeoDataset GetStreetTable();
	void SetStreetTable(LPDISPATCH);
	long GetLastError();
	void SetLastError(long);
	CString GetIntersectionMatchRules();
	void SetIntersectionMatchRules(LPCTSTR);
	short GetIntersectionMatchVariableCount();
	void SetIntersectionMatchVariableCount(short);
	short GetMinimumMatchScore();
	void SetMinimumMatchScore(short);
	float GetSpellingSensitivity();
	void SetSpellingSensitivity(float);
	BOOL GetMatchWhenAmbiguous();
	void SetMatchWhenAmbiguous(BOOL);
	CMoStrings GetSearchQueries();
	void SetSearchQueries(LPDISPATCH);

// Operations
public:
	CString GetCandidate(short index);
	CString GetMatchVariable(short index);
	CString GetMatchVariableField(LPCTSTR variable);
	void SetMatchVariableField(LPCTSTR variable, LPCTSTR lpszNewValue);
	CMoAddressLocation LocateCandidate(short index);
	CString GetIntersectionMatchVariable(short index);
	CString GetMatchVariableIntersectionLink(LPCTSTR variable, long linkGroup);
	void SetMatchVariableIntersectionLink(LPCTSTR variable, long linkGroup, LPCTSTR lpszNewValue);
	CString GetBatchMatchVariableField(LPCTSTR variable);
	void SetBatchMatchVariableField(LPCTSTR variable, LPCTSTR lpszNewValue);
	CMoStrings ListIndices();
	long IndexStatus();
	BOOL EraseIndices();
	BOOL AddIndex(LPCTSTR FieldName, LPCTSTR secondaryFieldName, long indexType);
	BOOL BuildIndices(BOOL force);
	long GenerateCandidates();
	long BatchMatch(LPDISPATCH addressTable, LPCTSTR addressField, LPDISPATCH DataConnection, LPCTSTR outputTableName, LPDISPATCH outputFields);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOGEOCODER_H__38A6C06E_483F_4758_AF9D_34D861A3123D__INCLUDED_)
