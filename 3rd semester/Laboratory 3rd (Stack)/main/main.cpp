#include "stack.h"
#include "form.h"

#include <iostream>
#include <string>

int main()
{
	cout << "============================================\n" << endl;

	string expr = { "(a+c)*(a+b)*((a-b-c)*d)" };

	TArithmeticExpression ex1(expr);

	map<string, double> op;
  
	op.emplace("a", 3.0);
	op.emplace("b", 7.0);
	op.emplace("c", 1.0);
	op.emplace("d", 9.0);
	op.emplace("e", 9.0);

	double res = ex1.Calculate(op);
  
	cout << "Infix:\t" << ex1.GetInfix() << endl;
	cout << "Postfix:   " << ex1.GetPostfix() << endl;
	cout << "Calculate:  " << res << endl;

	cout << endl << "============================================\n";

	return 0;
}
