#include "PyCodeBuilder.h"

CodeBuilder & PyCodeBuilder::addField(const string & type, const string & name)
{
	auto p = make_pair(type, name);
	m_code.m_members.push_back(p);
	return *this;
}

CodeBuilder & PyCodeBuilder::build()
{
	this->m_code_str = "/* python class */ \nclass " + m_code.m_classname + ":\n";

	for (auto p : this->m_code.m_members)
	{
		this->m_code_str += "    " + p.second + " : " + p.first + "\n";
	}

	return *this;
}
