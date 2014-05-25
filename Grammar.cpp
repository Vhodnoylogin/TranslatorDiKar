#include "Grammar.h"

Grammar::Grammar(string str){

}

void Grammar::SetDividers(string d1 = "::-", string d2 = "|:|", string d3 = "::|"){
	div1 = d1;
	div2 = d2;
	div3 = d3;
}

strarr Grammar::FindRuleL(string str){
	strarr res;
	for (table::iterator it = tbl.begin(); it != tbl.end(); it++){
		if (it->second == str)
			res.push_back(it->first);
	}
	return res;
}

strarr Grammar::FindRuleR(string str){
	strarr res;
	for (table::iterator it = tbl.begin(); it != tbl.end(); it++){
		if (it->first == str)
			res.push_back(it->second);
	}
	return res;
}

void Grammar::SetGrammar(string str){
	string tmp = "";

}