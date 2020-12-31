#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
	long long filesize=1024*1024*1024;
	char c[1024];
	srand(time(NULL));
	string s="datafile";
	ofstream ofs(s,ios::binary|ios::out);
	for(int j=0;j<filesize/1024;j++){
		for(int i=0;i<1024;i++)
			c[i]=(char)(rand()%256);
		ofs.write(c,sizeof(c));
	}
	return 0;
}
