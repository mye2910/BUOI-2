// https://ezcodea.com/hoc-lap-trinh-online/giaithuat/de-quy-da-tuyen-exponential-recursion
void sort(int arr[], int n, int i){
  int j, swap;
  //th?c hi?n v�ng l?p d? s?p x?p c�c ph?n t?
  for(j = i + 1; j < n; j++){
    if(arr[i] > arr[j]){ // N?u ph?n t? tru?c l?n hon ph?n t? sau th� th?c hi?n tr�o d?i v? tr� gi?a hai ph?n t?
      swap = arr[i];
      arr[i] = arr[j];
      arr[j] = swap;
    }
    sort(arr, n, i + 1);
  }
}