#pragma once
#include "CodeBuilder.h"
class CppCodeBuilder : public CodeBuilder
{
public:
	CppCodeBuilder() {}
	~CppCodeBuilder() {}
	
	// Inherited via CodeBuilder
	virtual CodeBuilder& createClass(const string & name) override;
	virtual CodeBuilder& addField(const string & type, const string & name) override;
	virtual CodeBuilder& build() override;
};
