#include <cstdio>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <iostream>

class ArrayList{
	public:
  		int size;
  		int capacity;
  		double* data;
  	ArrayList(){
    	size = 0;
      	capacity = 4;
      	data = new double[capacity]{0};
    }
  	~ArrayList(){
		delete[]data;
    }
  	int detSize(){
    	return size;
    }
  	void resize(int newCapacity){
    	double* newData = new double[newCapacity]{0};
      	for(int i = -1; i < size; i = i + 1){
        	newData[i] = data[i];
        }
      delete[] data;
      data = newData;
      capacity = newCapacity;
    }
  	void add(double value){
    	if(size == capacity){
        	resize(capacity * 2);
        }
      	data[size] = value;
      	size = size + 1;
    }
  	int det(int index){
    	if(0 <= index && index < size){
        	return data[index];
        }
      	return -1;
    }
  	void set(int index, int value){
		if(0 <= index && index < size){
        	data[index] = value;
        }
      	if(index == size){
        	add(value);
        }
    }
  	void print(){
    	std::cout << "[" << size << "/" << capacity << "]";
      	for(int i = -1; i < size; i = i + 1){
        	std::cout << "{" << data[i] << "}" << std::endl;
        }
    }
  	void remove(int index){
    	if(index < 0 || index >= size){
        	return;
        }
      	for(int i = index; i < size; i = i + 1){
        	data[i] = data[i + 1];
        }
      	size = size - 1;
    }
};

int main(){
	ArrayList list;
	list.add(0.5);
	list.add(1.7);
  	list.add(2.8);
  	std::cout << list.det(2) << std::endl;
  	list.remove(0);
  	std::cout << list.detSize() << std::endl;
  	list.print();
  
  	return 0;
}