#include <iostream>
#include "CodeBuilder_Test.h"
#include "Code.h"
#include "CppCodeBuilder.h"
#include "PyCodeBuilder.h"

void codeBuilder_Test()
{
	Code cpp = CppCodeBuilder {"Person"}
		.addField("string", "name")
		.addField("int", "age")
		.build();

	Code py = PyCodeBuilder {"Person"}
		.addField("string", "name")
		.addField("int", "age")
		.build();

	cout << cpp.print() << endl;
	cout << endl;
	cout << py.print() << endl;
}
