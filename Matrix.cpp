#include <iostream>
using namespace std;

int main() {
	int a[10][10], b[10][10], mult[10][10] ,r1 ,r2 , c1 ,c2;
	int i,j,k;
	cout<<"Enter the row & column of first matrix ="<<endl;
	cin>>r1>>c1;
	cout<<"Enter the row & column of second matrix ="<<endl;
	cin>>r2>>c2;
	if (r1!=c2)
	{
		cout<<"Can't be multiplied ";
		return 0;
    }	
		{
        cout<<endl<<"Enter element of matrix 1 :"<<endl;
		for(i=0;i<r1;++i)
		 {for(j=0;j<c1;++j)
		 {
		 	cout<<"Enter the element a"<<i+1<<j+1<<":";
		 	cin>>a[i][j];
		 	
		 }cout<<endl;
	 }
	 cout<<endl<<"Enter element of matrix 2 :"<<endl;
		for(i=0;i<r2;++i)
		 {for(j=0;j<c2;++j)
		 {
		 	cout<<"Enter the element b"<<i+1<<j+1<<":";
		 	cin>>a[i][j];
		 	
		 }cout<<endl;
	 }
	 for(i=0;i<r1;i++)
	 {
	 	for(j=0;j<c2;j++)
	 	{
	 		mult[i][j]=0;
	 		for(k=0;k<c1;k++)
	 		{
	 			mult[i][j]+=a[i][k]*b[k][j];
	 		}
	 	}cout<<endl;
	 }
	 	for(i=0;i<r1;++i)
		 {for(j=0;j<c2;++j)
		 {
		 	cout<<mult[i][j];
		 	
		 }cout<<endl;
		 	
		 }
	}
	return 0;
}