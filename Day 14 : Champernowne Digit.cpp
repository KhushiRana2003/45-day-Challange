using namespace std;
int champernowneDigit(int N) {
	string s="";
    for(int i = 1; i <= 103; i++){
        s+=to_string(i);
    }
    char ch = s[N-1];
    return ch-'0';
}
