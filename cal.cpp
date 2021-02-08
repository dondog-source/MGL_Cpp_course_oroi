#include<iostream>

using namespace std;

int main(){
	
	double a,b;
	
	char e,op;
	
	while(1){
		cout<<"if want to exit click:e"<<endl;
		cin>>a>>op>>b;
		if(op=='e'){cout<<e;
			break;						 
		}if(op=='+'){
			cout<<a+b<<endl;
		}else if(op=='-'){
			cout<<a-b<<endl;
		}else if(op=='*'){
			cout<<a*b<<endl;
		}else if(op=='/'){
			cout<<a/b<<endl;
		}
			
		
	}
	
	
	return 0;
}
