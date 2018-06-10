#pragma once
#include "CodeBuilder.h"
class PyCodeBuilder : public CodeBuilder
{
public:

	PyCodeBuilder(const string& className) {
		m_code.m_classname = className;
	}

	~PyCodeBuilder() {};

	virtual CodeBuilder& addField(const string & type, const string & name) override;
	virtual CodeBuilder& build() override;
};

