void Insertion_Sort(int a[], int n){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; pos = i-1;
		
		while((pos>=0)&&(a[pos]>x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
	}
}
void main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Insertion_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}