class Sort
{
    // add data members
    int *vector;
    int Nr_elements;
    int max_value;
    int min_value;
public:

    Sort(int number_of_elements, int max_element, int min_element);
    Sort();
    Sort(int* vector, int number_of_elements);
    Sort(int count, ...);
    Sort(char* c);
    // add constuctors
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};

