#pragma once
#include "CodeBuilder.h"
class CppCodeBuilder : public CodeBuilder
{
public:

	CppCodeBuilder(const string& className) { 
		m_code.m_classname = className;
	}
	
	~CppCodeBuilder() {}
	
	virtual CodeBuilder& addField(const string & type, const string & name) override;
	virtual CodeBuilder& build() override;
};
