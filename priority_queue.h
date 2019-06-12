/************************************************************
TODO : Add the description of file
*************************************************************/
#ifndef PROJECT1_MAIN_PRIORITYQUEUE_H_
#define PROJECT1_MAIN_PRIORITYQUEUE_H_

#include <queue>

template <typename T> 
class PriorityQueue {
 public:
  bool IsEmpty() const;
  const T& ReadTop() const;
  int GetSize();
  void Push(const T&);
  void Pop();	

 private:
  std::priority_queue<T> storage_;
};

#endif // PROJECT1_MAIN_PRIORITYQUEUE_H_