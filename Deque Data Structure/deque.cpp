
/**
 * @file deque.cpp
 * Implementation of the Deque class.
 *
 */

/* No argument constructor */
template <class T>
Deque<T>::Deque() {
    vector<T> data; 
    n1 = 0;
    n2 = -1;
}




/**
 * Adds the parameter object to the right of the Deque.
 *
 * @param newItem object to be added to the Deque.
 */

template <class T>
void Deque<T>::pushR(T newItem)
{
    data.push_back(newItem); 
    n2++; 
}

/**
 * Removes the object at the left of the Deque, and returns it to the
 * caller.
 *
 * See .h file for implementation notes. 
 *
 * @return The item that used to be at the left of the Deque.
 */
template <class T>
T Deque<T>::popL(){
  T* output = new T(data[n1]);
  n1++;
  if (n2 - n1 < n1) {
    vector<T> data1;
    for (int i = n1; i <= n2; i++)
       data1.push_back(data[i]);
    data = data1; 
    n1 = 0;
    n2 = data.size()-1;
  }
  return *output; 
}

// }
// left 
// right 
// while(p->next != NULL){

// }

    
// }

// left    right
// ABCDEFG
// GFEDCBA

// Node*p = left; 
// Node*q = right; 
// while (p->next !=NULL) {
//     *p = q;
//     p = p->next; 
//     q = q->next; 
// }


// for (int i = 1; i =< n*n*n ; i = i x 2){

// }


// 2^k = n^3
// log2 n^3 = k

// log 2 n^3

/**
 * Removes the object at the right of the Deque, and returns it to the
 * caller.
 *
 * @return The item that used to be at the right of the Deque.
 */
template <class T>
T Deque<T>::popR()
{
  T* output = new T(data[n2]); 
  n2--;
  //  if (n2 - n1 < n1) {
    vector<T> data1;
    for (int i = n1; i <= n2; i++)
      data1.push_back(data[i]);
    data = data1;
    n1 = 0;
    n2 = data.size()-1;
    //}
  return *output; 
 

}

/**
 * Finds the object at the left of the Deque, and returns it to the
 * caller. Unlike popL(), this operation does not alter the deque.
 *
 * @return The item at the front of the deque.
 */
template <class T>
T Deque<T>::peekL()
{
    return data[n1];
  
}



/**
 * Finds the object at the right of the Deque, and returns it to the
 * caller. Unlike popR(), this operation does not alter the deque.
 *
 * @return the value of The item at the right of the deque.
 */
template <class T>
T Deque<T>::peekR()
{   
    return data[n2]; 
    /**
     
     */
}



/**
 * Determines if the Deque is empty.
 *
 * @return bool which is true if the Deque is empty, false otherwise.
 */
template <class T>
bool Deque<T>::isEmpty() const
{
  return n2 < n1;
    /**
    
     */
}

