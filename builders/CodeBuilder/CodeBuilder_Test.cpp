#include <iostream>
#include "CodeBuilder_Test.h"
#include "Code.h"
#include "CppCodeBuilder.h"
#include "PyCodeBuilder.h"

void codeBuilder_Test()
{
	CppCodeBuilder cppBuilder;
	PyCodeBuilder pyBuilder;

	Code cpp = cppBuilder
		.createClass("Person")
		.addField("string", "name")
		.addField("int", "age")
		.build();

	cout << cpp.print() << endl << endl;

	Code py = pyBuilder
		.createClass("Person")
		.addField("string", "name")
		.addField("int", "age")
		.build();

	cout << py.print() << endl;
}
