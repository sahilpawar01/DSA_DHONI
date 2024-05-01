def main():
  A=set()
  print("set A is",A)
  B=set()
  while True:
    print("1.create set")
    print("2.add element to set")
    print("3.remove elementfrom set")
    print("4 contain emenet from set  ")
    print("5.return the size of set ")
    print("6.intersection of two set")
    print("7.union of two set")
    print("8.diference between two set")
    print("9.subset of two set")
    print("10.end of program ")
    choice=int(input("enter your choice:"))
    if choice==10:
      break
    if(choice==1):
      A=create_set(A)
      print("set A is",A)
    if(choice==2):
      X=int(input("enter the element to be add in set"))
      A=add_element(X,A)
      print("set A is",A)
    if(choice==3):
      X=int(input("enter the element to be remove from set"))
      A=remove_element(X,A)
      print("set A is ",A)
    if(choice==4):
      X=int(input("enter value contain is set"))
      contain_element(X,A)
    if(choice==5):
      print("size of set A is",size(A))
    if(choice==6):
      print("enter data for set B")
      B=create_set(B)
      intersection(A,B)
    if(choice==7):
      union(A,B)
    if(choice==8):
      difference(A,B)
      print("difference of set A and B is")
    if(choice==9):
      subset(A,B)
def create_set(X):
  n=int(input("enter the total number of values"))
  for i in range(n):
    x=int(input("enter the value"))
    X.add(x)
  return X 
def add_element(X,A):
  A.add(X)
  return A

def remove_element(X,A):
  Z=set()
  for i in A:
    if(i==X):
      pass
    else:
      Z.add(i)
  return Z
def contain_element(X,A):
  flag=1
  for i in A:
    if(X==i):
      print(X,"contain in A")
      fla=0
      break
    else:
      pass
    if(flag==1):
      print(X,"is not contain in A")
def size(A):
  counter=0
  for i in A:
    counter=counter+1
  return counter
def intersection(A,B):
  Z=set()
  for i in A:
    if i in B:
      Z.add(i)
  print("set A is",A)
  print("set B is",B)
  print("intersection of A and B is",Z)
def union(A,B):
  Z=set()
  Z=A
  for i in B:
    Z.add(i)
  print("set A is",A)
  print("set B is",B)
  print("union of A and B is",Z)

 
 
def difference(A,B):
  R=set( )
  for i in A:
    if i not in B:
      R.add(i)
  print("set difference of A-B is",R)
def subset(A,B):
  flag=False
  for i  in A:
    if i in B:
      flag=True
    else:
      flag=False
      print("A is not subset of B")
      break
    if(flag==True):
     print("A is subset of B")
main() 


OUTPUT:

('set A is', set([]))
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:1
enter the total number of values2
enter the value22
enter the value4
('set A is', set([4, 22]))
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:2
enter the element to be add in set5
('set A is', set([4, 5, 22]))
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:3
enter the element to be remove from set5
('set A is ', set([4, 22]))
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:4
enter value contain is set4
(4, 'contain in A')
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:5
('size of set A is', 2)
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:6
enter data for set B
enter the total number of values3
enter the value44
enter the value55
enter the value1
('set A is', set([4, 22]))
('set B is', set([1, 44, 55]))
('intersection of A and B is', set([]))
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:7
('set A is', set([1, 55, 4, 22, 44]))
('set B is', set([1, 44, 55]))
('union of A and B is', set([1, 55, 4, 22, 44]))
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:8
('set difference of A-B is', set([4, 22]))
difference of set A and B is
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:9
A is subset of B
A is subset of B
A is not subset of B
1.create set
2.add element to set
3.remove elementfrom set
4 contain emenet from set  
5.return the size of set 
6.intersection of two set
7.union of two set
8.diference between two set
9.subset of two set
10.end of program 
enter your choice:10
























    
