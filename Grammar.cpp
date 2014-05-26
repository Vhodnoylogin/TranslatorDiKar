#include "Grammar.h"

Grammar::Grammar(string str){
	SetDividers();
	SetGrammar(str);
}

void Grammar::SetDividers(string d1, string d2, string d3){
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

strarr Grammar::DivString(string str, string div){
	strarr res;
	vector<int> allpos;

	int pos = str.find(div, 0);
	while (pos != string::npos){
		allpos.push_back(pos);
		pos = str.find(div, pos + 1);
	}
	if (!allpos.empty()){
		int dlen = div.length();
		int veclen = allpos.size();
		int len = allpos[0];
		if (len > 0){
			string tmp = str.substr(0, len);
			res.push_back(tmp);
		}
		for (int i = 0; i < veclen - 1; i++){
			len = allpos[i + 1] - allpos[i] - dlen;
			if (len > 0){
				string tmp = str.substr(allpos[i] + dlen, len);
				res.push_back(tmp);
			}
		}
		len = str.length() - allpos[veclen - 1] - dlen;
		if (len > 0){
			string tmp = str.substr(allpos[veclen - 1] + dlen, len);
			res.push_back(tmp);
		}
	}
	else{
		res.push_back(str);
	}

	return res;
}

void Grammar::SetGrammar(string str){
	string tmp = "";
<<<<<<< HEAD
	strarr arr1 = DivString(str, div3);
	int len1 = arr1.size();
	for (int i = 0; i < len1; i++){
		strarr arr2;
		arr2 = DivString(arr1[i], div1);
		int len2 = arr2.size();
		if (len2 == 2){
			strarr arr3 = DivString(arr2[1], div2);
			int len3 = arr3.size();
			for (int j = 0; j < len3; j++){
				tbl.insert(make_pair(arr2[0], arr3[j]));
			}
		}
	}
}

void Grammar::OutRules(){
	table::iterator it;
	for (it = tbl.begin(); it != tbl.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
=======

>>>>>>> aafd13e8514b3f65b11e9e8e39473af21b4aa88a
}