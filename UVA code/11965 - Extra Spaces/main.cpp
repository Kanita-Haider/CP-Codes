#include <iostream>
  #include <string>
using namespace std;

int main()
{      int t,n,i=1,line=0;
		cin>>t;
    string str;

    while(t--){
			cin>>n;
		    cin.ignore();
		    if(line!=0)
		   cout <<endl;

		    cout<<"Case "<<i<<":"<< endl;

			while(n--){
			getline(cin,str);
			int flag=0;

			for(int i=0;i<str.size();i++){
			if(str[i]==' '  && flag==0) {
				cout<<str[i];
				flag=1;
			}
			else if(str[i]==' '  && flag==1)   {
				continue;
			}
			else{
				cout<<str[i];
				flag=0;
			}
		}
	cout<<endl;
    }
    i++;
  line=1;
    }
    return 0;
}
