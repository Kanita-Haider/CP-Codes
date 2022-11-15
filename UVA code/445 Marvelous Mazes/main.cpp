#include <iostream>
 #include <string>
using namespace std;

int main()
{
	string str;
	while(getline(cin,str)){
				if(!str.size()){
				    cout<<endl;
				continue;
			}

			int sum=0;
		for(int i=0;i<str.size();i++){
		   if(str[i]>='0' && str[i]<='9') {
			int x =str[i]-'0';
			sum+=x;
		   }
			if(str[i]>='A' && str[i]<='Z'){
				for(int j=0;j<sum;j++){
					cout<<str[i];
				}
				sum=0;
			}
			if(str[i]=='*'){
				for(int j=0;j<sum;j++){
					cout<<str[i];
				}
				sum=0;
			}
			if(str[i]=='b'){
				for(int j=0;j<sum;j++){
					cout<<" ";
				}
				sum=0;
			}
			if(str[i]=='!'){
					cout<<endl;
			}
				if(str[i]=='\n')
					continue;
		}
	cout<<endl;
	}
    return 0;
}
