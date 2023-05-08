#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		queue<int> q;
		int a; cin >> a;
		while(a--){
			int s; cin >> s;
			switch(s){
				case 1:{
					cout << q.size() << endl;
					break;
				}
				case 2:{
					if(q.empty()) cout << "YES";
					else cout << "NO";
					cout << endl;
					break;
				}
				case 3:{
					int n; cin >> n;
					q.push(n);
					break;
				}
				case 4:{
					if(!q.empty()) q.pop();
					else continue;
					break;
				}
				case 5:{
					if(!q.empty()) cout << q.front() << endl;
					else cout << "-1" << endl;
					break;
				}
				case 6:{
					if(!q.empty()) cout << q.back() << endl;
					else cout << "-1" << endl;
					break;
				}	
			}	
		}
	}
}
/*#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        deque<int> st;
        while (n--)
        {
            cin >> x;
            if (x == 1)
                cout << st.size() << endl;
            else if (x == 2)
            {
                if (st.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else if (x == 3)
            {
                cin >> x;
                st.push_back(x);
            }
            else if (x == 4)
            {
                if (st.size())
                    st.pop_front();
            }
            else if (x == 5)
            {
                if (st.size())
                    cout << st.front() << endl;
                else
                    cout << -1 << endl;
            }
            else if (x == 6)
            {
                if (st.size())
                    cout << st.back() << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
}*/
/*
1
14
3 1
3 2
3 3
5
6
4
4
4
4
4
3 5
3 6
5
1
*/
