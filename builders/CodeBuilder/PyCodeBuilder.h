#pragma once
#include "CodeBuilder.h"
class PyCodeBuilder :
	public CodeBuilder
{
public:
	PyCodeBuilder();
	~PyCodeBuilder();

	// Inherited via CodeBuilder
	virtual CodeBuilder & createClass(const string & name) override;
	virtual CodeBuilder & addField(const string & type, const string & name) override;
	virtual CodeBuilder & build() override;
};

