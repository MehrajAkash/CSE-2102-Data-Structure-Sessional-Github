

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int a[] = {0, 3, 2, 4, 1, 8, 5, 6, 2};

void merge ( int l, int mid, int r )
{
    int p = l; /// first half pointer
    int q = mid+1; /// second half pointer
    int len = r - l + 1;

    vector<int> v(len);
    int k = 0;

    for ( int i = l; i <= r; i++ ) {
        if ( p > mid ) {
            v[k] = a[q];
            k++, q++;
        }
        else if ( q > r ) {
            v[k] = a[p];
            k++, p++;
        }
        else if ( a[p] <= a[q] ) {
            v[k] = a[p];
            k++, p++;
        }
        else {
            v[k] = a[q];
            k++, q++;
        }
    }

    k = 0;
    for ( int i = l; i <= r; i++ ) {
        a[i] = v[k];
    }
=======
#include <bits/stdc++.h>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(vector<int>& arr, int left,
                     int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
>>>>>>> 5c8c224153860c9e8e25fe032b2cea065eb08003
        k++;
    }
}

<<<<<<< HEAD
void mergeSort ( int l, int r )
{
    cout << l << " " << r << endl;
    if ( l == r ) return;

    int mid = ( l + r ) / 2;

    mergeSort( l, mid );
    mergeSort( mid+1, r );
    merge( l, mid, r );

    for ( int i = 1; i <= 8; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    optimize();


    for ( int i = 1; i <= 8; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;

    mergeSort(1, 8);


    return 0;
}

=======
// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// Function to print a vector
void printVector(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    int n = arr.size();

    cout << "Given vector is \n";
    printVector(arr);

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted vector is \n";
    printVector(arr);
    return 0;
}
>>>>>>> 5c8c224153860c9e8e25fe032b2cea065eb08003
