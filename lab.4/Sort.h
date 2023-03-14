class Sort
{
private: 
    // add data members
    int *vector;
    int Nr_elements;
    int  Partition(int low, int high, bool ascendent);
    void quick(int low, int high, bool ascendent);
public:

    Sort(int number_of_elements, int max_element, int min_element);
    Sort();
    Sort(int array[], int number_of_elements);
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

