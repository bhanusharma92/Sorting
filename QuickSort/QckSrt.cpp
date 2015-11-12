#include<iostream>
using namespace std;
class QckSrt{
	int *ar;
	int n;
public:
	QckSrt(){}
	QckSrt(int size){
		n = size;
		ar = new int[size]();
	}
	void input();
	int partition(int,int);
	void sort(int,int);
	void output();
	~QckSrt(){
		delete []ar;
	}
};

void QckSrt :: input(){
	cout << "Enter the elements : ";
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	
}

int QckSrt :: partition(int beg ,int last){
	int i = beg - 1,j,temp;
	int key = ar[last];
	for(j = beg ; j < last; j++){
		if(ar[j] < key){
			i++;
			
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;

		}
	}
	
	temp = ar[i+1];
	ar[i + 1] = ar[last];
	ar[last] = temp;
	
	return (i + 1);
}
void QckSrt :: sort(int beg, int last){
	if (beg < last && beg > -1 && last < n){

		int pos;
  		pos = partition(beg,last);
		sort(beg,pos - 1);
		sort(pos + 1, last);
	}
}
void QckSrt :: output(){
	cout << "Sorted Sequence\n";
	for(int i = 0;i < n;i++){
		cout << ar[i] << " ";
	}
	cout << endl;
}
	
int main(){
	int size;

	cout << "Enter the size : ";
	cin >> size;

	QckSrt obj(size);
	obj.input();
	obj.sort(0,size - 1);
	obj.output();

	return 0;
}








		
