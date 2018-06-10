#pragma once
#include <vector>
#include <utility>
#include <string>
#include <iostream>

using namespace std;

class Code
{
	string m_code_str;

public:
	Code() { };
	~Code() {};

	string& print()
	{
		return m_code_str;
	}

	string m_classname;
	vector< pair<string, string> > m_members;
	
	friend class CodeBuilder;
};

