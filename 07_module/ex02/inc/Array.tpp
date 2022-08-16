template <typename T>
Array<T>::Array() {

	arr = new T[0];
	n = 0;
}

template <typename T>
Array<T>::Array(unsigned int _n) {

	arr = new T[_n];
	n = _n;
	for (unsigned int i = 0; i < n; i++)
		arr[i] = 0;
}

template <typename T>
Array<T>::Array(Array const & src) {

	*this = src;
}

template <typename T>
Array<T>::~Array() {

	delete [] arr;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array const & assign) {

	if (this == &assign)
		return *this;
	arr = new T[assign.n];
	n = assign.n;
	for (unsigned int i = 0; i < n; i++) {
		arr[i] = assign.arr[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {

	if (index < 0 || index >= n)
		throw std::out_of_range("Index out of range");
	return arr[index];
}

template <typename T>
T const & Array<T>::operator[](unsigned int index) const {

	if (index < 0 || index >= n)
		throw std::out_of_range("Index out of range");
	return arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {

	return n;
}