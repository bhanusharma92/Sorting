#include<iostream>
using namespace std;

class BblSrt{
	int n;
	int *ar;
public:
	BblSrt(){}
	BblSrt(int size){
		ar = new int[size]();
		n = size;
	}
	void input();
	void swap(int pos1, int pos2);
	void sort();
	void output();
};

void BblSrt :: input(){
	cout << "Enter elements : ";
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
}

void BblSrt :: swap(int pos1, int pos2){
	int temp;
	temp = ar[pos1];
	ar[pos1] = ar[pos2];
	ar[pos2] = temp;
}

void BblSrt :: sort(){
	for(int j = n - 1; j > 0 ; j--){
		for(int i = 0; i < j; i++){
			if(ar[i] > ar[i + 1]){
				swap(i, i + 1);
			}
		}	
	}
}

void BblSrt :: output(){
	for(int i = 0; i < n; i++){
		cout << ar[i] << " ";
	}
	cout << endl;
}
	
int main(){
	int size;
	cout << "Enter size: ";
	cin >> size;
	
	BblSrt obj(size);
	obj.input();
	obj.sort();
	obj.output();
	
	return 0;
}






	 
