#include "Translator.h"

int main(){
	string s = "d::-dd|:|rr|#|f::-ee";
	Grammar g(s);
	g.OutRules();
	//cout << s.find("ssd", 0) << " " << string::npos << endl;
	system("pause");
	return 0;
}