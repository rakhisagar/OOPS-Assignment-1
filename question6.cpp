#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout << "vector elements:";
	for (int x : v)
	     cout << x << " ";
    cout << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "front element: " << v.front() << endl;
    cout << " back element: " << v.back() << endl;
    cout << "element at index 1: " << v.at(1) << endl;
    v.insert(v.begin() + 1,15);
    cout << "after insert: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    v.erase(v.begin() + 1);
    cout << "after erase: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    v.pop_back();
    cout << "after pop_back: ";
    for(int x : v)
        cout << x << " ";
    cout << endl;
    cout << "is vector empty?"
         << (v.empty() ?
	"yes" : "no") << endl;
	    v.resize(5, 100);
	    cout << "after resize: ";
	    for (int x : v)
	        cout << x << " ";
	    cout << endl;
	    sort(v.begin(), v.end());
	    cout << "after sort: ";
	    for (int x : v)
	         cout << x << " ";
	    cout << endl;
	    v.clear();
	    cout << "after clear, size: "
	         << v.size() << endl;
	    return 0;
	}
	         
    
