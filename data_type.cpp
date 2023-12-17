#include<bits/stdc++.h>

using namespace std;

int main() {
   int a, b, sum;
   a=10;
   b=10;
   sum = a+b;
   0(1)

}










///1, 2, 3,...... n;
int main() {
   int n,  sum;
   cin>>n;
   sum=n*(n+1)/2;

   cout<<sum;
}








n=5
1...n;
int main() {
   int n,  sum=0;//0(1)
   cin>>n;
   for (int i=1;i<n;i++){
        //sum+i;
        sum=sum+i; 2// 0(2n)
   }
   cout<<sum;
   o(1)+0(2n)= 0(2n)= 2. o(n)= o(n);

}








/// double loop

int main() {
   int n,  sum=0;
   cin>>n;
   for (int i=1;i<n;i++){
        for (int j=1;j<n;j++) 0(n*n)=o(n^2)
            sum+=j;
    }
   cout<<sum;
}








int main() {
   int n,  sum=0;
   cin>>n;
   for (int i=1;i<n;i++){
        for (int j=1;j<3;j++) //= 0(n*3)= 3 o(n)= o(n)
            sum+=j;
    }
   cout<<sum;
}






int main() {
   int n,  sum=0;
   cin>>n;
   for (int i=1;i<n;i++){
        for (int j=1;j<n;j++) o(n*n*n)=n^4
              for (int k=1;k<n;k++)
                     sum+=k;
    }
   cout<<sum;
}






int main() {
   int n,  sum=0;
   cin>>n;
   for (int i=1;i<n;i++){
        for (int j=1;j<n;j++){
             sum+=j;
             for (int k=1;k<n;k++){
        sum+=k;  
                  for (int k=1;k<n;k++){
        sum+=k;  
     }
     }
        }
                    
    }

     for (int k=1;k<n;k++){
        sum+=k;  
     }


     for (int k=1;k<n;k++){
        sum+=k;  
     }

     for (int k=1;k<n;k++){
        sum+=k;  
     }
     for (int k=1;k<n;k++){
        sum+=k;  
     }
                o(n^2)+o(n)= o(n)

   cout<<sum;
}
time limit =1s
n=10 ^8
  0(n) 
            0(n*n)= 10^16

1=10^8



//log

count =0;
n=20
for (int i = 1; i < n; i *=2) 
    i=1;
    i=2         operation =5
    
    i=4
    i=8;
    i=16;

        count++;

o(logn)



int count = 0;
for (int i = N; i > 0; i /= 2)  o(logn)
    for (int j = 0; j < i; j++) o(n)
        count++;
 

 o(logn*n) =o (n logn)
