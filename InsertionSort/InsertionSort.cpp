#include <iostream>
using namespace std;
class InsertionSort{
 public:
	int n;
	int *ar;
	InsertionSort(){ }
	InsertionSort(int size){
		ar  = new int[size]();
		n = size;
	}
	void input(){
		cout<<"Enter elements \n";
		for(int i = 0 ; i < n; i++){
			cin >> ar[i];
		}
	} 	
	void sort(){
	 	for(int j = 1; j < n; j++){
                	int i = j-1;
                	int key = ar[j];
                	while(i >= 0 && key < ar[i]){
                        	ar[i+1] = ar[i];
                        	i--;
                	}
                	ar[i+1] = key;
        	}
	}
	void output(){
		cout << "Sorted Sequence:\n";
		for(int i = 0; i < n; i++){
			cout << ar[i] << " ";
		}
	}
		
};
	
int main(){
	int size;
	cout << "Enter the size of the array :  ";
	cin >> size;

	InsertionSort obj(size);

	obj.input();
	obj.sort();
	obj.output();
	
	cout <<endl;
	
	
	return 0;
}
	 
 
