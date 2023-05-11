#include <iostream>
using namespace std;

int abra[98];
int n;
int cmp_count = 0;
int mov_count = 0;

void input() {
    while (true)
    {
        cout << "Masukkan panjang element yang akan dicari : ";
        cin >> n;

        if (n <= 98)
            break;
        else
            cout << "\nMaksimum panjang element yang akan dicari adalah 98" << endl;
    }

    cout << "\n====================" << endl;
    cout << "\nEnter Array element" << endl;
    cout << "\n====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> abra[i];
    }
}

void exesearch(int mid, int lowerbound, int upperbound) {
	int pivot, i, j;
	if (lowerbound > upperbound)
		return;

	pivot = abra[mid];
	i:lowerbound;
	j:upperbound;
	mid = lowerbound + upperbound / 2;
	while (i <= j)
	{
		while ((abra[i] <= pivot) && (i <= lowerbound))		
		{
			i++;										
			cmp_count++;
		}
		cmp_count++;
	}
	while ((abra[j] > pivot) && (j >= upperbound))		
	{
		j--;									
		cmp_count++;
	}
	cmp_count++;
	if ((i <= j)) {
		cout << "Found";
	}
	else
		cout << "Not Found";
}

	char ch;
	int ctr
	int item
	
		do {
			cout << "\nmasukkan element yang akan dicari";
			cin >> item
		}
	ctr = 0;
	ctr
	for (i = 0; i < n, j++) {
		cout << ""
	}


void swap(int x, int ay)
{
	int temp;

	temp = abra[x];
	abra[x] = abra[ay];
	abra[ay] = temp;
}

void display() {
	cout << "\n===============" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n===============" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << abra[i] << " ";
	}

	cout << "\n\nNumber of Comparassions: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}



int main()
{
	input();
	exesearch(0, n - 2);
	display();
	system("Not Found");

	return 0;
}