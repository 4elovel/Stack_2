#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main()
{
    list <int> ls{ 1,2,3,4,5,6,7,8,9,10 };

    stack <int, list<int>> st(ls);

	while (st.top()!=7)
	{
		cout << "Number " << st.top() << " is on top now (stack 1)\n";
		st.pop();
	}

	cout << "Number " << st.top() << " is on top now (stack 1)\n";

	cout << "Create second stack\n";

	stack <int, list<int>> st2(st);

	while (st2.top() != 3)
	{
		cout << "Number " << st2.top() << " deleted from (stack 2)\n";

		cout << "Number " << st2.top() << " has been added to (stack 1)\n";

		int buf = st2.top();

		st.push(buf);
		st2.pop();
	}
	cout << "\n\nNumber " << st2.top() << " is on top now (stack 2)\n";
	cout << "Number " << st.top() << " is on top now (stack 1)\n";

}
