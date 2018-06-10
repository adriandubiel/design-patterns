#include "CppCodeBuilder.h"
#include <utility>

using namespace std;

CodeBuilder& CppCodeBuilder::createClass(const string&  name)
{
	m_code.m_classname = name;
	return *this;
}

CodeBuilder& CppCodeBuilder::addField(const string& type, const string& name)
{
	auto p = make_pair(type, name);
	m_code.m_members.push_back(p);
	return *this;
}

CodeBuilder& CppCodeBuilder::build()
{
	this->m_code_str = "/* cpp class */ \nclass " + m_code.m_classname + "\n{\n";

	for (auto p : this->m_code.m_members)
	{
		this->m_code_str += "  " + p.first + " " + p.second + ";\n";
	}

	this->m_code_str += "};";

	return *this;
}
