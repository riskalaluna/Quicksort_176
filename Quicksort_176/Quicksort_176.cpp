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
		{j--; //langkah 8

		}
	}
}