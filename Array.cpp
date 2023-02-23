#include <iostream>

using namespace std;

int main() {

int arr[50], i, pos,n;

cout<<"Enter the Size for Array: ";

cin>>n;

cout<<"Enter "<<n<<" Array Elements: ";

for(i=0; i<n; i++)

cin>>arr[i];

cout<<"Enter the position of element from where you want to delete element?" ;

cin>>pos;

for(i=pos; i<n; i++)

arr[i] = arr[i+1];

cout<<"\nThe New Array is:\n";

for(i=0; i<n-1; i++)

cout<<arr[i]<<" ";

return 0;

}
