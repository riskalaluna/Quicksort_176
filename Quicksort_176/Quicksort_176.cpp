#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int mov_count = 0; // number of movement
int n;
void input() {
	while (true)
	{
		cout << "masukan panjang element array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;

	}

	cout << "\n====================" << endl;
	cout << "\n Enter array element" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
// swap the element at index x with element at index y
void swap(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}
void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high) //Langkah 1
		return;

	//partition the list into two parts
	//one containing element less that or equal to pivot
	//outher containing element greather than pivot
	i = low + 1; //langkah 3
	j = high; //langkah 4
	pivot = arr[low]; //langkah 2

	while (i <= j) //langkah 10
	{
		// search for an element greater than pivot
		while ((arr[1] <= pivot) && (i <= high)) //langkah 5
		{
			i++; //langkah 6
			cmp_count++;
		}
		cmp_count++;
		//search for an element less thanor equal to pivot
		while ((arr[j] > pivot) && (j >= low)) //langkah 7
		{
			j--; //langkah 8
			cmp_count++;
		}
		cmp_count++;
		if (i < j) //langkah 9
			//if greator element is on left of the element
		{
			//swap the element at index i with the element at index j
			swap(i, j);
			mov_count++;
		}
	}
	//j now containt the index of the last element in the sort list
	if (low < j) //langkah 11
		//move to the pivot to its correct position in the list
	{
		swap(low, j);
		mov_count++;
	}
	//sort the list on the left of pivot using quick sort
	q_short(low, j - 1); //langkah 12
	//sort the list on the rifht of pivot using quick sort
	q_short(j + 1, high); //langkah 13
}
void display() {
	cout << "\n====================" << endl;
	cout << "\n-sorted array" << endl;
	cout << "\n====================" << endl;


}