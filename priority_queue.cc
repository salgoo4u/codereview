#include "priority_queue.h"

template <typename T>
bool PriorityQueue<T>::IsEmpty() const{
  return storage_.empty();
}

template <typename T>
int PriorityQueue<T>::GetSize() {
  return storage_.size();
}

template <typename T>
const T& PriorityQueue<T>::ReadTop() const{
  if (storage_.empty()) {
    return NULL;
  } else {
	return storage_.top();
  }
  
}

template <typename T>
void PriorityQueue<T>::Pop(){
  if (!IsEmpty())
  {
	storage_.pop();
  } 
}

template <typename T>
void PriorityQueue<T>::Push(const T& val){
  storage_.push(val);
}
