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
		cout << "Number " << st.top() << " is on top now\n";
		st.pop();
	}
}
