// https://ezcodea.com/hoc-lap-trinh-online/giaithuat/de-quy-da-tuyen-exponential-recursion
void sort(int arr[], int n, int i){
  int j, swap;
  //th?c hi?n vòng l?p d? s?p x?p các ph?n t?
  for(j = i + 1; j < n; j++){
    if(arr[i] > arr[j]){ // N?u ph?n t? tru?c l?n hon ph?n t? sau thì th?c hi?n tráo d?i v? trí gi?a hai ph?n t?
      swap = arr[i];
      arr[i] = arr[j];
      arr[j] = swap;
    }
    sort(arr, n, i + 1);
  }
}