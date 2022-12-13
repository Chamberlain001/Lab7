#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string x;
	string y = "";
    cout << "Input text: ";
	cin >> x;
	y = x;
    cout << "Reversed text: " << func1(x) << "\n";

	x = func1(x);
	
	if(y == x){
		cout << "Palindrome: Yes";
	}else{
		string z;
		z = func2(x);
		x = func2(y);
		if(z == x){
			cout << "Palindrome: Yes";
		}else{
			cout << "Palindrome: No";
		}
	}

    return 0;
}
