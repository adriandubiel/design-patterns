#pragma once
#include "Code.h"
#include <vector>
#include <utility>
#include <string>
#include <memory>
#include <ostream>
#include <iostream>

using namespace std;

class CodeBuilder
{
	Code c;
public:
	CodeBuilder() : m_code(c) { }
	virtual ~CodeBuilder() {}

	virtual CodeBuilder& createClass(const string& name) = 0;
	virtual CodeBuilder& addField(const string& type, const string& name) = 0;
	virtual CodeBuilder& build() = 0;
	
	Code getCode() {
		m_code.m_code_str = m_code_str;
		return m_code;
	}

	operator Code() const {
		m_code.m_code_str = m_code_str;
		return m_code;
	}

protected:
	Code &m_code;
	string m_code_str;
};
