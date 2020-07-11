#include<bits/stdc++.h>

using namespace std;

int main(){
	int num,start,stop,temp=0,tof;
	while(temp<5){
		cin>>num;
		tof=0;
		int countt1[num],countt2[num];
		for(int i=0;i<num;i++){
			countt1[i]=0;
			countt2[i]=0;
		}
		for(int i=0;i<num-1;i++){
			cin>>start>>stop;
			countt1[start-1]++;
			countt1[stop-1]++;
		}
		for(int i=0;i<num-1;i++){
			cin>>start>>stop;
			countt2[start-1]++;
			countt2[stop-1]++;
		}
		for(int i=0;i<num;i++){
			if(countt1[i]!=countt2[i]){
				tof=1;
			}
		}
		if(tof==1){
			cout<<"N"<<endl;
		}
		else{
			cout<<"Y"<<endl;
		}
		temp++;
	}
}
