std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int *arr = vec.data();
for (int i = 0; i < 10; ++i) {
  arr[i] *= 2; 
}
//The issue lies in the fact that the pointer 'arr' will only point to the data in the vector at the time it's created.  If the vector's memory is reallocated later, then 'arr' will become invalid and this code is prone to crashes or memory corruption.