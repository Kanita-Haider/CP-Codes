#include <iostream>
  #include <string>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
			int cnt=0,flag=0;
		for(int i=0;i<str.size();i++){
			if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' ) {
				flag=1;
				continue;

			}
			else{
				 if(flag == 1){
					cnt++;
					flag =0;
				 }
			}
		}
	cout<<cnt<<endl;
    }
    return 0;
}
