#include<iostream>
using namespace std;
class SelectionSort{
	int n;
	int *ar;
 public:
	SelectionSort(){}

	SelectionSort(int size){
		ar = new int[size]();
		n = size;
	}

	void input(){
		cout << "Enter numbers:\n";
		for(int i = 0 ; i < n ; i++){
			cin >> ar[i];
		}
	}
	
	int min(int beg,int last){
		int min = ar[beg];
		int pos = beg;	
		for(int i = beg; i <= last ;i++){
			if(ar[i] < min){
				min = ar[i];
				pos = i;
			}
		}
		
		return pos;
	}

	void sort();

	void output(){
		cout << "Sorted Sequence:\n";
		for(int i = 0; i < n ; i++){
			cout << ar[i] << " " ;
		}
		cout << endl;
	}
};
void SelectionSort :: sort(){
	for(int j = 0; j < n; j++){
		int pos,temp;
		pos = min(j,n-1);
				
		temp = ar[j];
		ar[j] = ar[pos];
		ar[pos] = temp;
	}
}		

int main(){
	int size;
	cout << "Enter size: ";
	cin >> size;
	
	SelectionSort obj(size);
	
	obj.input();
	obj.sort();
	obj.output();

	return 0;
}
