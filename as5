#include <iostream>
using namespace std;

class Array
{
private:
    int MaxSize;
    int A[30];
    int Size;

public:
    Array()
    {
        MaxSize = 30;
        Size = 0;
    }
    void Read_Array();
    void Display();
    void Traverse_Backward();
    void Insert(int Location, int Element);
    void Delete(int Location);
    int Search(int Element);
};

void Array::Read_Array()
{
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    if (N > MaxSize)
    {
        cout << "Array size exceeds MaxSize." << endl;
        cout << "Maximum size is " << MaxSize << endl;
        return;
    }
    else
    {
        Size = N;
        cout << "Enter the elements: ";
        for (int i = 0; i < Size; i++)
        {
            cin >> A[i];
        }
    }
}

void Array::Display()
{
    cout << "Array elements: ";
    for (int i = 0; i < Size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::Traverse_Backward()
{
    cout << "Array elements (backwards): ";
    for (int i = Size - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int Array::Search(int Element)
{
    for (int i = 0; i < Size; i++)
    {
        if (A[i] == Element)
        {
            return i;
        }
    }
    return -1; // Element not found
}

void Array::Insert(int Location, int Element)
{
    if (Size >= MaxSize)
    {
        cout << "Array Overflow. Cannot insert element." << endl;
        return;
    }
    if (Location < 0 || Location > Size)
    {
        cout << "Invalid location. Cannot insert element." << endl;
        return;
    }
    for (int i = Size - 1; i >= Location; i--)
    {
        A[i + 1] = A[i]; // shifting elements to the right
    }
    A[Location] = Element; // insert the element
    Size++;                // modify Size
}

void Array::Delete(int Location)
{
    if (Location < 0 || Location >= Size)
    {
        cout << "Invalid location. Cannot delete element." << endl;
        return;
    }
    for (int i = Location; i < Size - 1; i++)
    {
        A[i] = A[i + 1]; // shifting elements to the left
    }
    A[Size - 1] = 0; // Mark last location as empty
    Size--;         // Modify Size
}

int main()
{
    Array arr;

    arr.Read_Array();

    cout << "Original array: ";
    arr.Display();

    cout << "Array backwards: ";
    arr.Traverse_Backward();

    int element;
    cout << "Enter an element to search: ";
    cin >> element;
    int loc = arr.Search(element);
    if (loc != -1)
    {
        cout << "Element found at index: " << loc << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    int insertLoc, insertElem;
    cout << "Enter location and element to insert: ";
    cin >> insertLoc >> insertElem;
    arr.Insert(insertLoc, insertElem);

    cout << "Array after insertion: ";
    arr.Display();

    int deleteLoc;
    cout << "Enter location to delete: ";
    cin >> deleteLoc;
    arr.Delete(deleteLoc);

    cout << "Array after deletion: ";
    arr.Display();

    return 0;
}
