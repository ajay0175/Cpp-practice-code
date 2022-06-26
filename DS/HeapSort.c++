/*
  1. Implementation of max and min heap using array and stl(priority queue)
  2. Implementation of heapify Algorithm
  3. Implementation of heapSort
*/

#include<bits/stdc++.h>
using namespace std;

class heap
{
  public:
  int arr[100];
  int size = 0;

  heap()
  {
    arr[0] = -1;
    size = 0;
  }

  void insert(int val) // TC => O(LOGN)
  {
    size = size + 1;
    int index = size;
    arr[index] = val;

    while(index > 1)
    {
      int parent = index / 2;

      if(arr[parent] < arr[index]) // Just change the from '<' to this '>' and it become min heap
       {
        swap(arr[parent], arr[index]);
        index = parent;
      }
      else
      {
        return;
      }
    }
  } 

  void deletefromHeap()
  {
    if(size == 0)
    {
      cout << "Nothing to Delete" << '\n';
      return;
    }

    //1st condition => put last element to into first index
    arr[1] = arr[size];

    //2nd condition => remove last element by decreasing the size
    size--;

    // 3rd condition => take root to its correct position
    int i = 1;
    while(i < size)
    {
      int leftIndex = 2 * i;
      int rightIndex = 2 * i + 1;

      if(leftIndex < size and arr[i] < arr[leftIndex])
      {
        swap(arr[i], arr[leftIndex]);
        i = leftIndex;
      }
      else if(rightIndex < size and arr[i] < arr[rightIndex])
      {
        swap(arr[i], arr[rightIndex]);
        i = rightIndex;
      }
      else
      {
        return;
      }
    }
  }

  void print()
  {
    for(int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }cout << '\n';
  }  
};

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int left = 2 * i;
  int right = 2 * i + 1;

  if(left <= n and arr[largest] < arr[left])
  {
    largest = left;
  }
  
  if(right <= n and arr[largest] < arr[right])
  {
    largest = right;
  }

  if(largest != i)
  {
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n)
{
  int size = n;

  while(size > 1)
  {
    // step 1 => swap
    swap(arr[size], arr[1]);
    size--;

    heapify(arr, size, 1);
  }
}


int main()
{
  heap h;
  h.insert(50);
  h.insert(55);
  h.insert(53);
  h.insert(52);
  h.insert(54);
  h.print();

  h.deletefromHeap();
  h.print();

  int arr[6] = {-1, 54, 53, 55, 52, 50};
  int n = 5;

  // Heap Creation
  for(int i = n / 2; i > 0; i--)
  {
    heapify(arr, n, i);
  }

  cout << "print the array" << '\n';
  for(int i = 1; i <= n; i++)
    cout << arr[i] << " ";
  cout << '\n';


  // HeapSort
  heapSort(arr, n);

  cout << "printing sorted array" << '\n';
  for(int i = 1; i <= n; i++)
    cout << arr[i] << " ";
  cout << '\n';

  cout << "Using the priority Queue" << '\n';

  //MaxHeap
  priority_queue<int> pq;

  pq.push(4);
  pq.push(2);
  pq.push(5);
  pq.push(3);

  cout << "Element at top of pq " << pq.top() << '\n';
  pq.pop();
  cout << "Element at top of pq " << pq.top() << '\n';

  // Min heap

  priority_queue<int, vector<int>, greater<int>> minheap;

  minheap.push(4);
  minheap.push(2);
  minheap.push(5);
  minheap.push(3);

  cout << "Element at top of minheap " << minheap.top() << '\n';
  minheap.pop();
  cout << "Element at top of minheap " << minheap.top() << '\n';

  return 0;
}