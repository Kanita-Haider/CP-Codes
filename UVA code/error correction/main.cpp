#include <iostream>
using namespace std;

int main()
{
	int n;
	for(int k=1; cin>>n;k++){

		if(n==0){
		break;
		}
		int arr[n+5][n+5];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) {
				cin>>arr[i][j];
			}
		}

		int i,j,a=0,b=0,x,y;

		for( i=1;i<=n;i++){
			int sum1=0;
			for(j=1;j<=n;j++) {
				sum1+=arr[i][j];
			}
			if(sum1%2!=0){
				 x=i;
				a++;
			}
		}

		for( i=1;i<=n;i++){
			int sum2=0;
			for(j=1;j<=n;j++) {
				sum2+=arr[j][i];
			}
			if(sum2%2!=0){
					b++;
					y=i;
			}
		}
	if(a==0 && b==0){
		cout<<"OK"<<endl;
	}
	else if(a==1 && b==1){
		cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
	}
	else{
		cout<<"Corrupt"<<endl;
	}
	}
    return 0;
}
