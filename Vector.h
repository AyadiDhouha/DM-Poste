#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
using namespace std;
template <class T> 
class Vector
{
 protected:
    
    T* arr;
    int capacity;
    int current;
 
public:
    Vector( int c)
    {
        arr = new T[c];
        capacity = c;
        current = 0;
        cout<<"construction vector"<<endl;
    }
    ~Vector()
    {
    	delete [] arr ;
    	cout<<"destruction vector"<<endl;
	}
	
	T& operator[](int a)
	{
		return arr[i];
	}
	
	bool is_empty()
	{
		return current==0;
	}
 
    void push(T data)
    {
        if (current == capacity) {
            T* temp = new T[2 * capacity];
 
            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }
 
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
 
        arr[current] = data;
        current++;
    }
    
    
    T get(int index)
    {
 
       
        if (index < current)
            return arr[index];
    }
 
    
    void pop_back() { current--; }
    
    void pop (T data)
    {
    	int i; 
	
		for (i = 0; i < capacity; i++) {
			if (arr[i] == data) { break; }
		}
		for (int j = i; j < capacity-1; j++) {
			vecteur[j] = vecteur[j + 1];
		}
		capacity--;
		current--;
	}
	
	bool search (T data)
	{
		bool b = false;
	for (int i = 0; i <=capacity; i++)
	 {
		if (data == arr[i])
		 {
			b = true; 
			break; 
		}
	}
	
	return b;
	}
 
    
    int size() { return current; }
 
    
    int getcapacity() { return capacity; }
    
    void print()
    {
        for (int i = 0; i < current; i++) 
            cout << arr[i] << endl;
        
    }

};
 
#endif
