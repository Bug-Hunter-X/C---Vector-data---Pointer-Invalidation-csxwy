std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
for (int i = 0; i < vec.size(); ++i) {
  vec[i] *= 2; //Correct way to modify elements 
}
// Alternatively, using iterators:
for (auto& num : vec) {
  num *= 2;
}
//Or using std::transform
std::transform(vec.begin(), vec.end(), vec.begin(), [](int x){ return x * 2;});