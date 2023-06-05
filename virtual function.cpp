#include <iostream>
using namespace std;


class prob {
	public:
	virtual	void show(){
		
		cout<<" the head  of uni is working" << endl;
}
		
};
class math :public prob{
	public:
			void show(){
		
		 cout<< "the TEACHER of the uni is working"<<endl;
	}
		 
};
class eng : public prob{
	public:
			void show(){
		
		cout<< "the students are woring " << endl;
	}
};
 int main () {
 	prob *ptr[4];
 	int ch, i;
 	for (i=0;i<4 ;i++){
	 
 	cout<<" enter your choice  " << endl;
 	cin>>ch;
 	
 	if(i==1)
 	ptr[i]= new prob;
 	else if (i==2)
 	ptr[i]=new math;
 	else 
 	ptr[i]=new eng;
 	
}
 for(i=0 ; i<4; i++)
 
 ptr[i]->show();
}

