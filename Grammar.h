#ifndef _GRAMMAR_
#define _GRAMMAR_

#include "includes.h"

class Grammar {
protected:
	table tbl;
	string div1, div2, div3;

	strarr FindRuleL(string);
	strarr FindRuleR(string);

	strarr DivString(string, string);
public:
	Grammar(); // init without any 
	Grammar(string);

	void SetDividers(string d1 = "::-", string d2 = "|:|", string d3 = "|#|");
	void SetGrammar(string str);

	void OutRules();


};

#endif