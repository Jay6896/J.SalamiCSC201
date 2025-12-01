#include <iostream>
#include <string>

using namespace std;

void sumOfElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "\nSum of all elements: " << sum;
}

void findMinimum(int arr[], int size)
{
    int min_val = arr[0];
    int min_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_index = i;
        }
    }
    cout << "\nMinimum element: " << min_val << " was found at index " << min_index;
}

void findMaximum(int arr[], int size)
{
    int max_val = arr[0];
    int max_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
            max_index = i;
        }
    }
    cout << "\nMaximum element: " << max_val << " was found at index " << max_index;
}

void Sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// The Linear Search Algorithm checks each element in the array one by one until it finds the target or the whole list has been searched.
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// The Binary Search Algorithm finds the index of a target of a sorted array by repeatedly dividing the search interval in half till the target is found.
int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

void searchMenu(int arr[], int size)
{
    int search_choice;
    int search_key;
    int result_index;

    cout << "\n\n=== Search Menu ===";
    cout << "\n\n1.) Linear Search";
    cout << "\n2.) Binary Search";
    cout << "\n\nEnter your choice: ";
    cin >> search_choice;

    cout << "\n\nEnter the number you would like to search: ";
    cin >> search_key;

    if (search_choice == 1)
    {
        result_index = linearSearch(arr, size, search_key);
        if (result_index != -1)
        {
            cout << "\nElement " << search_key << " was found at index " << result_index;
        }
        else
        {
            cout << "\nElement " << search_key << " was not found in the array";
        }
    }
    else if (search_choice == 2)
    {
        int temp_arr[10];
        for (int i = 0; i < size; ++i)
        {
            temp_arr[i] = arr[i];
        }

        Sort(temp_arr, size);

        result_index = binarySearch(temp_arr, size, search_key);
        if (result_index != -1)
        {
            int original_index = linearSearch(arr, size, search_key);
            cout << "\nElement " << search_key << " was found at original index " << original_index;
        }
        else
        {
            cout << "\nElement " << search_key << " was not found in the array";
        }
    }
    else
    {
        cout << "\nInvalid input" << endl;
    }
}

int main()
{
    int my_arr[] = {15, 8, 42, 4, 23, 16};
    int arr_size = sizeof(my_arr) / sizeof(my_arr[0]);

    cout << "The array is: ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << my_arr[i] << " ";
    }
    cout << "\n\n======== Array Operations ========\n";

    sumOfElements(my_arr, arr_size);

    findMinimum(my_arr, arr_size);

    findMaximum(my_arr, arr_size);

    searchMenu(my_arr, arr_size);
}