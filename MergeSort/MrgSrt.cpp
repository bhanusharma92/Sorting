#include<iostream>
using namespace std;
class MrgSrt{
	int *ar;
	int n;
public:
	MrgSrt(){}
	MrgSrt(int size){
		ar = new int[size]();
		n = size;
	}
	void input();
	void merge(int beg, int mid, int last);
	void sort(int beg,int last);
	void output();
};

void MrgSrt :: input(){
	cout << "Enter elements : ";
	for(int i = 0 ;i < n; i++){
		cin >> ar[i];
	}
}

void MrgSrt :: merge(int beg, int mid, int last){
	int l1,l2,m = 0,n = 0;
	l1 = mid - beg + 1;
	l2 = last - mid;

	int *tmpar1 = new int[l1 + 1];
	int *tmpar2 = new int[l2 +1];

	for(int i = beg; i <= mid; i++){
		tmpar1[m++] = ar[i];
	}
	for(int i = mid + 1; i <= last; i++){
		tmpar2[n++] = ar[i];
	}

	tmpar1[l1] = 99999;//shows infinity
	tmpar2[l2] = 99999;//shows infinity
	
	int i,j;
	i=0;
	j =0;
	for(int k = beg; k <= last; k++){
		if(tmpar1[i] < tmpar2[j]){
			ar[k] = tmpar1[i];
			i++;
		}
		else{
			ar[k] = tmpar2[j];
			j++;
		}
	}
}

void MrgSrt :: sort(int beg, int last){
	if(beg < last){
		int mid = (beg + last)/2;
		sort(beg,mid);
		sort(mid + 1, last);
		merge(beg, mid, last);
	}
}

void MrgSrt :: output(){
	cout << "Sorted Sequence : ";
	for(int i = 0; i < n; i++){
		cout << ar[i] << " ";
	}
	cout << endl;
}

int main(){
	int size;
	cout << "Enter the size: ";
	cin >> size;

	MrgSrt obj(size);

 	obj.input();
	obj.sort(0,size - 1);
	obj.output();

 	return 0;
}	





