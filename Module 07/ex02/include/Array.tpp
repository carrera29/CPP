/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollo <pollo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:14:01 by pollo             #+#    #+#             */
/*   Updated: 2024/10/04 18:02:12 by pollo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : data(NULL), n(0) {
    std::cout << "\033[32mArray Default construction called\033[0m" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size) : data(NULL), n(size) {
    std::cout << "\033[32mArray of "<< n << " Default construction called\033[0m" << std::endl;
    try {
        data = new T[size]();
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        n = 0;
        throw;
    }
}

template <typename T>
Array<T>::~Array() {
    std::cout << "\033[31mDefault destructor called\033[0m" << std::endl;
    delete[] data;
}

template <typename T>
unsigned int Array<T>::size() const {
    return this->n;
}

template <typename T>
Array<T>::Array(const Array &copy) : data(NULL), n(copy.n) {
    std::cout << "\033[32mArray Copy construction called\033[0m" << std::endl;
    try {
        data = new T[copy.n]();
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        n = 0;
        throw;
    }
    for (unsigned int i = 0; i < copy.n; i++)
        data[i] = copy.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &copy) {
    std::cout << "Array Copy assignment construction called"<< std::endl;
    if (this != &copy) {
        delete [] data;
        n = copy.n;
        try {
            data = new T[copy.n];
            for (unsigned int i = 0; i < copy.n; i++)
                data[i] = copy.data[i];
        } catch (const std::bad_alloc& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            n = 0;
            throw;
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](const unsigned int index) {
    if (index >= this->n)
        throw std::out_of_range("Index out of bounds");
    return data[index];
}
