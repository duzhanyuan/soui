#pragma once
#include "SLogAdapter.h"

class CAppLogParse : public TObjRefImpl<ILogParse>
{
public:
	virtual BOOL ParseLine(LPCWSTR pszLine,SLogInfo **ppLogInfo) const;


	virtual int GetLevels() const;

	virtual void GetLevelText(wchar_t szLevels[][50]) const;

	virtual SStringW GetName() const;

};

class CLogcatParse : public TObjRefImpl<ILogParse>
{
public:
	virtual BOOL ParseLine(LPCWSTR pszLine,SLogInfo **ppLogInfo) const;

	virtual int GetLevels() const;

	virtual void GetLevelText(wchar_t szLevels[][50]) const;

	virtual SStringW GetName() const;

};

class CParseFactory : public TObjRefImpl<IParserFactory>
{
public:

	virtual ILogParse * CreateLogParser(int iParser) const;

	virtual int GetLogParserCount() const;

};