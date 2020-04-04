#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	int temper = test;
	while(test--)
    {
		cout<<"Case #"<<temper-test<<": ";
		string s1;
		string finalans="";
		cin>>s1;
		int check;
		for(int i=0;i<s1.length();i++){
			if(i==0){
				for(int j=0;j<s1[i]-'0';j++){
					finalans+="(";
				}
				finalans+=s1[i];
				//check = s1[i]-'0';
			}
			else{
				int p = s1[i]-s1[i-1];
				if(p<0){
					for(int i=0;i<abs(p);i++){
						finalans+=")";
					}
					finalans+=s1[i];
				}
				else{
					for(int i=0;i<p;i++){
						finalans+="(";
					}
					finalans+=s1[i];
				}
				
			}
		}
		for(int i=0;i<s1[s1.length()-1]-'0';i++){
			finalans+=")";
		}
		cout<<finalans<<endl;
	}
}