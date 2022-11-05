 #include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 int count=0;
 
 while(t--)
 {
     int N;
     cin>>N;
     int a[N];
     for(int i=0;i<N;i++)
     {
         cin>>a[i];
     }
     for(int j=0;j<N;j++)
     {
         for(int k=0;k<N;k++)
         {
             if(k==j)
             continue;
             
             if(a[j]==a[k])
             count++;
         }
         
     }
     cout<<(N-count-1)<<endl;
     
 }
	return 0;
}
