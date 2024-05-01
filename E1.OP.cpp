//Group E Heap Data Structure
#include<iostream>
using namespace std;

class student
{
  int marks[10];
  int n;
  public:
  void read_marks();
  void display_marks();
  void max_heapify(int i);
  void print_maximum();
  void build_max_heap();
  void min_heapify(int i);
  void build_min_heap();
  void print_minimum();
};
void student::print_minimum()
{
 cout<<"\nminimum marks obtained by a student is "<<marks[0];
}
void student::build_min_heap()
{
  int last_non_leafnode=(n/2)-1;
  for(int i=last_non_leafnode;i>=0;i--)
  {
   min_heapify(i);
  }
}
void student::build_max_heap()
{
  int last_non_leafnode=(n/2)-1;
  for(int i=last_non_leafnode;i>=0; i--)
  {
    max_heapify(i);
  }
}
void student::print_maximum()
{
  cout<<"\nmaximum marks obtained by student is "<<marks[0];
}
void student::min_heapify(int i)
{
  int minimum=i;
  int leftchild=2*i+1;
  int rightchild=2*i+2;
  if(leftchild<n && marks[leftchild]<marks[minimum])
  {
    minimum=leftchild;
  }
  if(rightchild<n && marks[rightchild]<marks[minimum])
  {
   minimum=rightchild;
  }
  if(minimum!=i)
  {
   int temp=marks[i];
   marks[i]=marks[minimum];
   marks[minimum]=temp;
   min_heapify(minimum);
  }
}
void student::max_heapify(int i)
{
  int largest=i;
  int leftchild=2*i+1;
  int rightchild=2*i+2;
  if(leftchild < n && marks[leftchild]>marks[largest])
  {
     largest =leftchild;
  }
  if(rightchild<n && marks[rightchild]>marks[largest])
  {
    largest =rightchild;

  }
  if(largest !=i)
  {
    int temp =marks[i];
    marks[i]=marks[largest];
    marks[largest]=temp;

    max_heapify(largest);
 }
}
void student::read_marks()
{
  cout<<"\nEnter n for total no. of marks";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"\nEnter marks ";
    cin>>marks[i];
  }
}
void student::display_marks()
{
  cout<<"\nEntered marks are ";
  for(int i=0;i<n;i++)
   cout<<marks[i]<<"  ";
}
int main()
{
  cout<<"hello";
  student s;
  s.read_marks();
  s.display_marks();
  cout<<"\nBuilding max heap:=> ";
  s.build_max_heap();
  s.display_marks();
  s.print_maximum();
  cout<<"\nbuilding min heap :=>";
  s.build_min_heap();
  s.display_marks();
  s.print_minimum();
  return(0);
}

"OUTPUT":-



Enter n for total no. of marks5

Enter marks 44

Enter marks 45

Enter marks 76

Enter marks 56

Enter marks 77

Entered marks are 44  45  76  56  77
Building max heap:=>
Entered marks are 77  56  76  44  45
maximum marks obtained by student is 77
building min heap :=>
Entered marks are 44  45  76  56  77  
minimum marks obtained by a student is 44
