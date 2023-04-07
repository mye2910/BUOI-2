void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là ch? s? noi ph?n t? này dã d?ng dúng v? trí
         và là ph?n t? chia m?ng làm 2 m?ng con trái & ph?i */
        int pi = partition(arr, low, high);
 
        // G?i d? quy s?p x?p 2 m?ng con trái và ph?i
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}